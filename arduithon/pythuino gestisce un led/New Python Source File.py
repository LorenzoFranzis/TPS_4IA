import serial
import time

arduino = serial.Serial("COM5", 9600)
time.sleep(1)

while True:
    val = input("comando: ")
    arduino.write((val + "\n").encode())
    print(val)
