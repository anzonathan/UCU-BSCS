
### Objectives

1. [[#Setting up a Network]]
2. [[#Configure Each PC]] 
3. [[#Create hostnames for Switches and Router]] 
4. [[#Secure Console Ports]] 
5. [[#Secure Privileged Mode]]
6. [[#Set a MOTD (Message of the day)]] 
7. [[#Create a username]]



### Setting up a Network

![[1.png]]

1. Setup the network by first laying out all your devices
	1. 2 PCs
	2. 2 Switches
	3. 1 router
2. Connect each PC to the router with a console cable (the blue one that curves), from the RS32 (on the PC) to the one and only console port (on the switch).
3. Create another connection from each PC to the switch with a copper Straight-Through. (Use any fast ethernet port)
4. Make a connection from the router to each switch with an Automatic Connection ⚡️.
5. Make a connection between each switch with an Automatic Connection ⚡️. (In a few seconds, all connections should have green triangles except the router connections)
6. Enable the ports to the router
	1. Click the router
	2. Config >> Interface >> GigabitEthernet 0/0/0 (this should be the port number that the cables connect to)>> Port Status >> on
	3. Do the same for the other port:GigabitEthernet 0/0/1 >> Port Status >> on (All cables should now have green triangles)
### Configure Each PC

1. Click a pc 
2. Desktop >> IP Configuration
3. Set the IPv4 Address to 10.10.10.1
4. Set the Subnet Mask to 255.255.255.0
5. Set the default gateway to 10.10.10.254
6. Do this for the other PC put change the IPv4 to 10.10.10.2
7. Test wether the PCs can communicate
	1. Clcik a PC
	2. Desktop >> Command Prompt
	
```shell
ping 10.10.10.1
```

	This is the Ip Addess of the other PC. You should recieve a meessage like this. 
	
```shell
Reply from 10.10.10.2: bytes=32 time<1ms TTL=128

Reply from 10.10.10.2: bytes=32 time<1ms TTL=128

Reply from 10.10.10.2: bytes=32 time<1ms TTL=128

Reply from 10.10.10.2: bytes=32 time<1ms TTL=128

  

Ping statistics for 10.10.10.2:

Packets: Sent = 4, Received = 4, Lost = 0 (0% loss),

Approximate round trip times in milli-seconds:

Minimum = 0ms, Maximum = 0ms, Average = 0ms
```

If it you don't receive packets or if they get lost. You should setup your connections again and make sure your PCs are configured well. 
### Create hostnames for Switches and Router

1. Label the first switch 'BSCS',the second switch 'BSDS', and the router 'Computing'. Do this by clicking the text below each device. (Labeling does not change the hostname)
2. Click a switch >> CLI

```Switch CLI
Switch>enable
Switch#config t
Switch(config)#hostname BSCS
BSCS(config)# exit
exit
```

3. Do this for the second switch but make the hostname 'BSDS'
4. Use the same instructions for the router and make the hostname 'computing'
### Secure Console Ports 

1. Click a switch >> CLI

```Switch
BSCS>enable
BSCS#config t
BSCS(config)# line console 0
BSCS(config-line)# password LAN-ONE
BSCS(config-line)# login
BSCS(config-line)# exit
BSCS(config)# exit
```

2. Test if this works my exiting and entering the CLI again. If you are prompted for a password , you have secured the port. If it does not, repeat the steps.

### Secure Privileged Mode 

1. Click a switch >> CLI

```Switch
BSCS>enable
BSCS#config t
BSCS(config)# enable password CISCO
BSCS(config-line)# exit
BSCS(config)# exit
```

2. Verify wether the password works when try to enter privileged mode by entering 'enable'
```Switch
BSCS>enable
```
3. Do this for the other switch as well

### Set a MOTD (Message of the day)

1. Click a switch >> CLI

```Switch
BSCS>enable
BSCS#config t
BSCS(config)# banner modtd "Unauthorized access is prohibited. Please exit immediately"
BSCS(config)# exit
BSCS# exit
```

2. Enter into the CLI to see if the MOTD appears
3. Do this for the second switch
### Create a username 

1. Create a username

 ```Switch
BSCS>enable
BSCS#config t
BSCS(config)#line console 0
BSCS(config-line)#login local
BSCS(config-line)#username Lan password LAN-ONE
BSCS(config)#exit
```

2. Verify it works by exiting. It should prompt you for the username
3. Replicate this process for the second switch
4. Save all your config settings

```Switch
BSCS>enable
BSCS#copy running-config startup-config
Destination filename [startup-config]?[Enter]
Building configuration..
```



#### References 

1. [Cisco](https://edshare.gcu.ac.uk/2192/2/Files/2.2.3.3%20Packet%20Tracer%20-%20Configuring%20Initial%20Switch%20Settings%20Instructions.pdf)
