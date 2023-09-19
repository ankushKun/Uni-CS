# Virtual LAN in CPT

en
vlan database
vlan 2 name NMAE
vlan 3 name name
exit
conf t
int F 0/1
switchport access vlan 2
int F 0/2
switchport access vlan 3
int F 0/3
switchport mode trunk
