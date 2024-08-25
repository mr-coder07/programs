from tkinter import *
root = Tk()
root.geometry("400x400")
Label(root,text = "enter first no " ).pack()
num1=Entry(root)
num1.pack()
Label(root,text = "enter second no " ).pack()
num2=Entry(root)
num2.pack()

def sum():
    a=int(num1.get())
    b=int(num2.get())
    return a+b
def sub():
    a=int(num1.get())
    b=int(num2.get())
    return a-b
def mul():
    a=int(num1.get())
    b=int(num2.get())
    return a*b
def dic():
    a=int(num1.get())
    b=int(num2.get())
    return a/b
def rem():
    a=int(num1.get())
    b=int(num2.get())
    return a%b
def result():
    
    return 
Button(root, text = "submit" , command =  ).pack()
root.mainloop()
