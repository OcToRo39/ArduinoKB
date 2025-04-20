import serial
from pynput.keyboard import Controller
import time

keyboard = Controller()


ser = serial.Serial('COM4', 9600, timeout=1)
time.sleep(2)

key_map = {
    'W': 'w',
    'A': 'a',
    'S': 's',
    'D': 'd'
}

print(f"Welcome to Arduino KB")
print(f"Make sure u have replaced the port in the script from com4 to comx (x being ur com port)")
time.sleep(1)
print(f"Waiting for input")

while True:
    if ser.in_waiting:
        line = ser.readline().decode('utf-8').strip()
        if line in key_map:
            print(f"Pressing {line}")
            keyboard.press(key_map[line])
            time.sleep(0.1)
            keyboard.release(key_map[line])

