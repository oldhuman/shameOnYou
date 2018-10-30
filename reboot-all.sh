#!/bin/bash

RED="\033[1;31m"
GREEN="\033[1;32m"
NOCOLOR="\033[0m"

for project in $(gcloud projects list  --format="value(project_id)")
do
	for instance in  $(gcloud compute instances list --format="value(name)" --filter="status:running" --quiet)
	do
	echo "${GREEN}Stopping instance :${NOCOLOR} $project $instance"
	  zone=$(gcloud compute instances list --filter="name=$instance" --format="value(zone)" --quiet)
	  status=$(gcloud compute instances describe $instance --zone=$zone --format="value(status)" --quiet)
	  gcloud compute instances stop $instance --zone=$zone --async --quiet
	done
	sleep 40
	for instance in  $(gcloud compute instances list --format="value(name)" --filter="status:terminated" --quiet)
	do
	echo "${GREEN}Starting instance :${NOCOLOR} $project $instance"
	  zone=$(gcloud compute instances list --filter="name=$instance" --format="value(zone)" --quiet)
	  status=$(gcloud compute instances describe $instance --zone=$zone --format="value(status)" --quiet)
	  gcloud compute instances start $instance --zone=$zone --async --quiet
	done
done
