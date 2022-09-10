# PiPICO_JustGimmeSerial
Simple demo for Pi PICO Serial Interfaces that is oddly not easy to find


I don't know what it is, but for some reason this simple info about the three UARTs of the PICO is hard to find. Just about anything mentioning it "Yeah serial now for 5 pages of how to handle all of the mistakes you are going to get with the cmake file".

Look, all I wanted is some Arduino IDE based C sample just so I can get some comms done and get some work done and move on. Why is that so hard? Even when pin references were made, they didn't say physical pin or GP number.

So with much cursing I finally managed to get all three UARTs, one of which is the default in the USB connector, working. I'm putting it here mainly so I don't forget. Note this is the Philhower library. 

The second and newer file is the MBED OS Version. Working with the Pico on the job this week I noticed that Serial and Serial1 were possible, but got an error when trying to use "Serial2". But the MBED OS allows a more "Raw" and parameter-rich way to define and set up serial ports. So "Serial" is still active but I have taken to the other means for the other two serial ports.  I happen to have some old Bluetooth devices that use RTS and CTS so this can be handy. 
