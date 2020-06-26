# ESP8266-based_40_channel_Wi-Fi_relay
This tricky device will allow you to control 40 independent channels from a single ESP8266

To build this device you need:
1) ESP8266 x1
2) WS2812 LED's x41
3) Resistor 510 ohm x1
4) Light activated switch x40
5) Power source(s) that can provide 9 volts and enough current for relays as well as supply ESP8266 (3.3V or 5V)

Note: If you're using 5 volts power supply then you should put "+" of your power supply to the "Vin" pin.<br>
If you're using 3.3 volts power supply then put "+" of your power supply to the "3V3" pin.<br>
In both cases you have to put "-" of your power supply to the "GND" pin.<br>
<br>
The state of each channel is individually controlled and completely independent from one another.<br>
<br>
It's not a dimmer. Each channel has only two states "ON" and "OFF".<br>
<br>
First LED isn't used, second LED is a first channel, third LED is a second channel, etc.
<br>
<br>
You can find instructions on building a light activated switch here:
<br>
https://www.circuitspedia.com/light-activated-dark-activated-switch-without-relay-using-triac/
<br>
Attention: I don't own anything from circuitspedia.com. I just provided you with a link to an external source.
<br>
All of the material related to "Light Activated Switch Without Relay" belongs to circuitspedia.com and its affiliates.
