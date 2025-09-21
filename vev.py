from tkinter import *
f1 = Tk()
f1.title("W2LMXD")
f1.geometry("700x600")

lname = Label(text="FIRST NAME :", fg="purple")
lname.pack()
vnom = Entry()
vnom.pack()

lp = Label(text="LAST NAME :", fg="purple")
lp.pack()
vp = Entry()
vp.pack()


f1.mainloop()
