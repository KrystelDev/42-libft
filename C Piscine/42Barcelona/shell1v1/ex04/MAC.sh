#!\bin\bash
ifconfig | greo ether | cut -c8- | tr -d ' '