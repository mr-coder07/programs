from tkinter import *
root = Tk()
root.geometry("400x400")
Label(root, text = " enter first name " ).pack()
var1 =  Entry(root)
var1.pack()
Label(root, text = " enter last name " ).pack()
var2 =  Entry(root)
var2.pack()

def fname():
    a=  var1.get()
    Label(root, text = "  welcome to python "+a+ " world needs you!!! " ).pack()

Button(root, text = "submit" , command = fname ).pack()
root.mainloop()

#how to store the user entery in a variable 
