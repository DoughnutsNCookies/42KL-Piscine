ifconfig -a | grep -w ether | tr 'ether' ' ' | tr '\t' ' ' | sed 's/^ *//'
