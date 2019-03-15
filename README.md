# Linking Raspberry Pi with multiple devices on i2C - Arduino and SSD1603 OLED screen

This is quick tutorial on using a two-wire i2c bus to link together:

*  A Raspberry Pi 2 Model B running Python
*  Optional: a T-Cobbler for linking the Raspberry Pi's GPIO pins to the breadboard
*  A SSD1603 128x32 OLED display
*  An Arduino Uno
*  An Arduino Micro
*  Optional - but highly recommended - 4-channel 3.3V to 5V level converter.

The tutorial is in the form of a Jupyter Notebook. If you are not a Jupyter Notebook user, you 
can [view it here](https://nbviewer.jupyter.org/github/ylabrj/i2c_Rpi_Arduino_OLED/blob/master/I2C_with_OLED.ipynb) and cut and 
paste the Python and Arduin0 code into your own files. The Arduino code can also be found in the *sketches/* directory.

Along the way, we also cover how to display the Raspberry Pi's IP address on the OLED display. Very handy for displaying the RPi's address after boot-up to allow linking to it from a laptop in a headless configuration.

If you like Jupyter Notebook, you can load the [jam magic](https://github.com/ylabrj/jam/blob/master/README.md), to
run everything including the Arduino code from within Jupyter Notebook on the Raspberry Pi. 
