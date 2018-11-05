#!/bin/bash
email="oldhuman55@gmail.com"
for project in $(gcloud projects list --format="value(project_id)")
do
	for instance in  $(gcloud compute instances list --format="value(name)" --filter="status:running" --quiet)
		do
		echo "##################"
		echo "#####Restarting instance: $project $instance"
		  zone=$(gcloud compute instances list --filter="name=$instance" --format="value(zone)" --quiet)
		  status=$(gcloud compute instances describe $instance --zone=$zone --format="value(status)" --quiet)
		  #gcloud compute instances stop $instance --zone=$zone --quiet
		  gcloud compute instances reset $instance --zone=$zone --quiet
		done
		echo "$(gcloud compute instances list --format="value(name)")"
done
