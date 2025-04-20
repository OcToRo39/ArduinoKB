# ArduinoKB

Before starting, u should know that this project is only made for 4 buttons that each simulate the button press of the keys: WASD, the keys can be programmed to anything else with little knowledge

Requirements:
Arduino UNO
4x Buttons
A lot of Male to Male Wires, too dumb to count them
Python installed on PC
Arduino IDE

for setting up the project irl, ive provided a picture of what it looks like for me, it might not help a lot but should give u the idea of what the project would look like

Steps to Installation:
1. Open the sketch provided in Arduino IDE
2. Flash the sketch once u have setup the project IRL
3. Close Arduino IDE
4. Open the provided python file in ur favourite python IDE (python file tested only on PYCHARM, will prob work anywhere anyway)
5. CAUTION: Make sure to install everything from requirements.txt with pip, u should know how
6. go to line 8, and replace COM4, with ur com port shown on arduino
7. run the python script, wait for it to say "Waiting for input"
9. press any of the buttons and it should say "Pressing X" (X being the button pressed, should be one of these: WASD)
10. Have fun playing fps games with ur custom made WASD keyboard (more keys can be added but i only used 4 since thats the only amount i have :)) )
