* First, make sure to power off your Arduino – remove any USB cable.

* Plug a black wire between the blue line of the breadboard and a ground (GND) pin on the Arduino board.

* Plug the LED. You can notice that the LED has a leg shorter than the other. Plug this shorter leg to the ground (blue line here) of the circuit.

* Connect the longer leg of the LED to a digital pin (here pin no 8, you can change it). Add a 220 Ohm resistor in between to limit the current going through the LED.

* Add the push button to the breadboard, like in the picture.

* Connect one leg of the button to the ground, and put a 10k Ohm resistor in between. This resistor will act as a “pull down” resistor, which means that the default button’s state will be LOW.

* Add a red wire between another leg of the button and VCC (5V).

* Finally, connect a leg of the button (same side as the pull down resistor) to a digital pin (here 7).
