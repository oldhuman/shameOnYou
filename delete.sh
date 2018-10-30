#!/bin/bash
delete_instances (){
for instance in  $(gcloud compute instances list --filter="status=running" --format="value(name)" --quiet)
do
  zone=$(gcloud compute instances list --filter="name=$instance" --format="value(zone)" --quiet)
  status=$(gcloud compute instances describe $instance --zone=$zone --format="value(status)" --quiet)
  created_on=$(gcloud compute instances describe $instance --zone=$zone --format="value(creationTimestamp.date('%Y-%m-%d'))" --quiet)
  echo "####Deleting instance " $project $instance $zone
  gcloud compute instances delete $instance --zone=$zone --quiet
done
}

#LOGIC
for project in $(gcloud projects list  --format="value(project_id)")
	do
		gcloud config set project $project
		echo "Project: " $project
		delete_instances
	done
exit