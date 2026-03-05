import tkinter as tk
from time import strftime

class dt():
    def __init__(self,h,m,s):
        self.h = h
        self.m = m
        self.s = s
    def __repr__(self):
        return f"sono le {self.h} e {self.m} minuti e {self.s} secondi."

window = tk.Tk()
window.geometry("500x100")
window.title("Digital Clock")
first=tk.Label(window,font="arial 50 bold", fg="white", background="black")
first.grid(row=0,column=0)
window.configure(background="black")
def setTime():
    s=strftime("%H:%M:%S %p")
    first.config(text=s)
    first.after(1000,setTime)
if __name__ == "__main__":
    setTime()
    window.mainloop()