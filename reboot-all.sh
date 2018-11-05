#!/bin/bash
email="oldhuman55@gmail.com"
for project in $(gcloud projects list --format="value(project_id)")
do
	for instance in  $(gcloud compute instances list --project $project --format="value(name)" --filter="status:running" --quiet)
		do
			echo ""
			echo "#####Restarting instance: $project $instance"
			zone=$(gcloud compute instances list --project $project --filter="name=$instance" --format="value(zone)" --quiet)
			status=$(gcloud compute instances describe $instance --project $project --zone=$zone --format="value(status)" --quiet)
			gcloud compute instances reset $instance --project $project --zone=$zone --quiet
		done

	echo "$(gcloud compute instances list)"
	echo ""
done

for project in $(gcloud projects list --format="value(project_id)")
do
	for instance in  $(gcloud compute instances list --project $project --format="value(name)" --filter="status:terminated" --quiet)
		do
			echo ""
			echo "#####Restarting instance: $project $instance"
			zone=$(gcloud compute instances list --project $project --filter="name=$instance" --format="value(zone)" --quiet)
			status=$(gcloud compute instances describe $instance --project $project --zone=$zone --format="value(status)" --quiet)
			gcloud compute instances start $instance --project $project --zone=$zone --quiet
		done

	echo "$(gcloud compute instances list)"
	echo ""
done