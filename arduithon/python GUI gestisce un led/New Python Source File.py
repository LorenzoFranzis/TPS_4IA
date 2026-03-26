import serial
import time
import tkinter as tk

arduino = serial.Serial("COM4", 9600)
time.sleep(1)

# Creazione finestra principale
root = tk.Tk()
root.title("Gestore LED")
root.geometry("300x200")

# Label
label = tk.Label(root, text="Spento")
label.pack(pady=20)

# Funzioni evento (puoi modificarle)
def bottone1_click():
    val = "a"
    arduino.write((val + "\n").encode())
    label.config(text="Acceso")

def bottone2_click():
    val = "s"
    arduino.write((val + "\n").encode())
    label.config(text="Spento")

# Bottone 1
btn1 = tk.Button(root, text="Accendi", command=bottone1_click)
btn1.pack(pady=5)

# Bottone 2
btn2 = tk.Button(root, text="Spegni", command=bottone2_click)
btn2.pack(pady=5)

# Avvio GUI
root.mainloop()