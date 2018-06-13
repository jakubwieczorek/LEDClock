# Spectral Clock

## Introduction 
Spectral clock is device which consist of a bar with over a dozen of leds attached to it and motor which accelerate the bar to quite huge speed.
Leds can be controled separately by the microcontroller. Human eye is unable to notice the diference or the changes in objects which oscillates more than 20Hz. 
If motor accelerate itself to 1 / 20Hz -> it gives 1200 turns per minute if microcontroller turn some leds human eye will see the continues clear circle.
Lets imagine what will happen if microcontroller calculate the time of ratio and basing on that time the half of it turn on the led and the second turn off. 
Then we'll see half circle. Because of huge microcontroller computing power he can turn off and on that leds whenever constructor and programmer want. 
So there is possibility to display quite sophisticated pictures. 

## Technology
The main question is how to build that clock and basing on which technology do that. I've choosen stm32 microcontroller and hal library,
because in my opinion there are the best at this time with huge power and capabilities and quite small price. To display fluent view there is need
to have speed described in introduction. Bldc motors have speed on level tens of thousands ratios per minute, but controling
that engines is sophisticated. Anyway I decided to use them. Leds are simple 20mA current leds. There is a very big problem with power supply, 
because that leds will turn with huge speed and the current is necessary to supply them all the time. There is 3 possibilities to solve it:
1. contact power supply
2. induction supply
3. place a battery at the bar

All of them have advantages and no. Contact power is simple but the friction will slow down motor. Induction is smart and good idea, but quite difficult to
built, because of stabilization the power and magnets which can have influence for motor again. There option is very expensive, because that clock will 
eat a lots of power.

I've chosen contanct power supply.

## Folders structures
1. Code - the software part of the project with stmCubeMx file and sources packages.
2. Documentation - extensive description of software in doxygen, and hardware part. Also pdf with a lots of images and thoughts.
3. Datasheets - the datasheets of all parts.
4. Schema - altium pcbs and schemas for clock and bldc driver.

For more information go to documentation.