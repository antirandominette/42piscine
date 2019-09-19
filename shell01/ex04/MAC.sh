ifconfig -a | grep ether | rev | cut -c2- | cut -d " " -f1 | rev
