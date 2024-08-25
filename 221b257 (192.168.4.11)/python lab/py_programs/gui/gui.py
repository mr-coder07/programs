from tkinter import *
root = Tk()
def info():
    Label(root,text = "hello world").pack()
Button(root,text = "ok" , command = info ).pack()
root.mainloop()
