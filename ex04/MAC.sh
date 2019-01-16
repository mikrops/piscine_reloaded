ifconfig  | grep 'ether ' | cut -b8- | sed 's/ //g'
