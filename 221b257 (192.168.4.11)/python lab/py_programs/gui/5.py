from tkinter import *
root = Tk()
def info() :
    Label(root,text = "Welcome ... ").pack()
Button(root, text = "GO",command= info ).pack()
root.mainloop()
