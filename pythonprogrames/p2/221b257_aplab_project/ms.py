from tkinter import *
import sqlite3 as database
from tkinter import messagebox as tkmsg
from datetime import datetime

mydb = database.connect("om")
cursor = mydb.cursor()

#cursor.execute("drop table passenger;")
#cursor.execute("drop table run;")
cursor.execute(
    "CREATE TABLE IF NOT EXISTS passenger ( name varchar(20),gender varchar(10),mobile int primary key,seat int(2),"
    "journey_date"
    "date);"
)
cursor.execute("create table  IF NOT EXISTS bus_details(bus_id varchar(10) , bus_type varchar(20), capacity varchar(3)"
               ",price varchar(5),op_id varchar(6), route_id varchar(6));")

cursor.execute("create table if not exists bus ( start varchar(20), end varchar(20) , date date );")
cursor.execute("create table if not exists run (bid varchar(10), rn_dte varchar(20) , avl_seats varchar(4));")
cursor.execute("INSERT OR IGNORE INTO run VALUES (1, '2003-12-08', 10);")
mydb.commit()

cursor.execute("create table if not exists operator (id varchar(10),name varchar(20),address varchar(50), "
               "mob varchar(10), email varchar(30));")
cursor.execute("create table if not exists route (id varchar(10), name varchar(20) , st_id varchar(20));")
mydb.commit()


class bus_booking_system:
    def __init__(self):
        self.nwsts = None
        self.nwdt = None
        self.nwbid = None
        self.img = None
        self.date = None
        self.gender = None
        self.tkt_frame = None
        self.age = None
        self.mob = None
        self.seat = None
        self.name = None
        self.to = None
        self.from1entry = None
        self.journey = None
        self.from1 = None
        self.toentry = None
        self.journeyentry = None
        self.frame4 = None
        self.frame3 = None
        self.frame2 = None
        self.frame = None
        self.current_window = None

    def create_window(self):
        if self.current_window:
            self.current_window.destroy()
        root = Tk()
        root.geometry("733x644")
        self.current_window = root
        root.title("mybookings")
        root.maxsize(733, 644)
        self.frame = Frame(root)
        self.frame2 = Frame(root)
        self.frame3 = Frame(root)
        self.frame4 = Frame(root)
        self.frame.grid(row=0, column=0, columnspan=3)
        self.frame2.grid(row=1, column=0, columnspan=3)
        self.frame3.grid(row=2, column=0, columnspan=3)
        self.frame4.grid(row=3, column=0, columnspan=3)

        self.img = PhotoImage(file="starbus.png")
        Label(self.frame, text=" " * 45).grid(row=0, column=0)
        Label(self.frame, image=self.img).grid(row=0, column=1, columnspan=3)

        Label(
            self.frame2,
            text=" " * 55,
        ).grid(row=0, column=0)
        Label(
            self.frame2,
            text="ONLINE BUS BOOKING SYSTEM ",
            font="areal 15 bold ",
            bg="lightblue",
            fg="red",
            pady=5,
        ).grid(row=1, column=1, columnspan=3)

        return root

    def homepage(self):
        root = self.create_window()
        Label(self.frame3, text=" " * 45).grid(row=2, column=0)
        Label(self.frame3, text="OM DUTT MISHRA ", font="areal 14 bold italic ", fg="orange").grid(row=2, column=1)
        Label(self.frame3, text="221B257 BATCH-B8 ", font="areal 14 bold italic ", fg="orange").grid(row=3, column=1)
        Label(self.frame3, text="PYTHON LAB PROJECT ", font="areal 14 bold italic ", fg="orange").grid(row=4, column=1)
        Button(self.frame3, text="project=>", command=self.choice_page).grid(row=3, column=4)

    def choice_page(self):
        root = self.create_window()
        Button(self.frame4, text="intro_page", command=self.homepage).grid(row=1, column=5)
        Label(self.frame3, text=" " * 55).grid(row=0, column=0)
        Button(self.frame3, text="Seat Booking ", command=self.seat_booking, padx=10, pady=5).grid(row=0, column=1)
        Button(self.frame3, text="Check Booking", command=self.check_data, padx=10, pady=5).grid(row=0, column=2)
        Button(self.frame3, text="Add Bus Details ", command=self.add_bus_details, pady=5).grid(row=0, column=5)
        Label(self.frame4, text=" " * 125).grid(row=0, column=0)
        Label(self.frame4, text="for admins only ", fg="red", font="areal 7 bold ", pady=10).grid(row=0, column=1)

    def seat_booking(self):
        root = self.create_window()
        Label(self.frame2, text=" " * 45).grid(row=0, column=0)
        Label(self.frame2, text="Enter Journey Details ", font="areal 15 bold ", bg="lightgreen", fg="darkgreen",
              pady=5).grid(row=2, column=1, columnspan=3)

        Label(self.frame3, text=" " * 30).grid(row=0, column=0)
        Label(self.frame3, text="To").grid(row=0, column=1)
        self.to = StringVar()
        self.toentry = Entry(self.frame3, textvariable=self.to)
        self.toentry.grid(row=0, column=2)
        Label(self.frame3, text="from").grid(row=0, column=3)
        self.from1 = StringVar()
        self.from1entry = Entry(self.frame3, textvariable=self.from1)
        self.from1entry.grid(row=0, column=4)
        Label(self.frame3, text="Journey date").grid(row=0, column=5)
        self.journey = StringVar()
        self.journeyentry = Entry(self.frame3, textvariable=self.journey)
        self.journeyentry.grid(row=0, column=6)
        self.date = self.journey.get()

        def check_bus():
            try:
                start_location = self.from1.get()
                end_location = self.to.get()
                journey_date = self.journey.get()

                cursor.execute("INSERT INTO bus VALUES (?, ?, ?);", ('guna', 'prayagraj', '2003-12-08'))
                cursor.execute("SELECT * FROM bus WHERE start=? AND end=? AND date=?",
                               (start_location, end_location, journey_date))

                res = cursor.fetchone()
                if res:
                    txt = f"{res[0]} goes to {res[1]} on {res[2]}"
                    Label(self.frame3, text=txt).grid(row=1, column=1, columnspan=5)
                    self.journey.set(journey_date)

                    def show_proceed():
                        self.passenger_details()

                    Button(self.frame3, text="bus", command=show_proceed).grid(row=1, column=0)
                else:
                    tkmsg.showinfo("Bus Not Found", "No bus found for the specified details.")
            except Exception as e:
                print("Error:", e)

        Button(self.frame3, text="submit", command=check_bus).grid(row=0, column=7)
        Button(self.frame3, text="home", command=self.choice_page).grid(row=0, column=8)

    def passenger_details(self):
        root = self.create_window()
        Label(self.frame4, text=" " * 50, font="areal 8 bold ").grid(row=1, column=0)
        Label(self.frame4, text="Name", font="areal 8 bold ").grid(row=1, column=3)
        self.name = StringVar()
        self.nameentry = Entry(self.frame4, textvariable=self.name)
        self.nameentry.grid(row=1, column=4)
        Label(self.frame4, text="No. of seats ", font="areal 8 bold ").grid(row=1, column=5)
        self.seat = IntVar()
        self.seatentry = Entry(self.frame4, textvariable=self.seat)
        self.seatentry.grid(row=1, column=6)
        Label(self.frame4, text=" " * 50, font="areal 8 bold ").grid(row=2, column=0)
        Label(self.frame4, text="mobile", font="areal 8 bold ").grid(row=2, column=3)
        self.mob = IntVar()
        self.mobentry = Entry(self.frame4, textvariable=self.mob)
        self.mobentry.grid(row=2, column=4)
        Label(self.frame4, text="age", font="areal 8 bold ").grid(row=2, column=5)
        self.age = IntVar()
        self.ageentry = Entry(self.frame4, textvariable=self.age)
        self.ageentry.grid(row=2, column=6)
        option = ["male", "female", "rocket"]
        self.gender = StringVar()
        self.gender.set("gender")
        self.r_read = OptionMenu(self.frame4, self.gender, *option)
        self.r_read.grid(row=3, column=5)
        # Label(self.frame4, text=" "*50, font="areal 8 bold ").grid(row=1, column=0)
        Button(self.frame4, text="book seat ", command=self.give_ticket).grid(row=3, column=6)
        Button(self.frame4, text="home", command=self.choice_page).grid(row=3, column=7)

    def give_ticket(self):
        root = self.create_window()
        self.tkt_frame = Frame(root, relief="sunken", border=3)
        self.tkt_frame.grid(row=2, column=1, columnspan=5)
        Label(self.frame2, text=" " * 45).grid(row=0, column=0)
        Label(self.frame2, text="Bus Ticket ", font="areal 15 bold ", bg="lightgreen", fg="darkgreen",
              pady=5).grid(row=2, column=1, columnspan=3)
        Button(self.frame3, text="home", command=self.choice_page).grid(row=1, column=2)
        Label(self.tkt_frame, text="Passenger: ", font="areal 8 bold").grid(row=0, column=0)
        Label(self.tkt_frame, text=self.name.get(), font="areal 8 bold").grid(row=0, column=1)
        Label(self.tkt_frame, text="Gender:  ", font="areal 8 bold").grid(row=0, column=2)
        Label(self.tkt_frame, text=self.gender.get(), font="areal 8 bold").grid(row=0, column=3)
        Label(self.tkt_frame, text="No of seats: ", font="areal 8 bold").grid(row=1, column=0)
        Label(self.tkt_frame, text=self.seat.get(), font="areal 8 bold").grid(row=1, column=1)
        Label(self.tkt_frame, text="Mobile: ", font="areal 8 bold").grid(row=2, column=0)
        Label(self.tkt_frame, text=self.mob.get(), font="areal 8 bold").grid(row=2, column=1)
        Label(self.tkt_frame, text="Travel On: ", font="areal 8 bold").grid(row=1, column=2)
        Label(self.tkt_frame, text=self.date, font="areal 8 bold").grid(row=1, column=3)

        try:
            # Insert passenger data into the database
            insert_query = (
                f"INSERT INTO passenger (name, gender, mobile, seat, journey_date) "
                f"VALUES ('{self.name.get()}',' {self.gender.get()}', {self.mob.get()}, {self.seat.get()}, '{self.date}');"
            )
            cursor.execute(insert_query)
            mydb.commit()

            tkmsg.showinfo(title="Confirmation", message="Your seat has been booked. Ticket generated successfully!")
        except Exception as e:
            tkmsg.showerror(title="Error", message=f"Error inserting data: {str(e)}")

    def check_data(self):
        root = self.create_window()
        Label(self.frame2, text="Check Your Booking ", font="areal 15 bold ", bg="lightgreen", fg="blue",
              pady=5).grid(row=3, column=1, columnspan=3)
        Label(self.frame2, text="enter your mob no.",
              pady=5).grid(row=2, column=0, columnspan=3)

        self.mob_to_check = IntVar()
        mob_to_check_entry = Entry(self.frame2, textvariable=self.mob_to_check)
        mob_to_check_entry.grid(row=2, column=2)

        def check_mob():
            try:
                query = f"SELECT * FROM passenger WHERE mobile = {self.mob_to_check.get()}"
                cursor.execute(query)
                res = cursor.fetchall()

                if res:
                    for row in res:
                        opt = f"Name: {row[0]},gender: {row[1]}, Mobile: {row[2]}, No. of Seats: {row[3]}, date: {row[4]}"
                        Label(self.frame4, text=opt).grid(row=0, column=0)
                else:
                    Label(self.frame3, text="No booking found for the given mobile number.").grid(row=0, column=0)

            except Exception as e:
                tkmsg.showerror("Error", f"Error: {e}")

        Button(self.frame3, text="check", command=check_mob).grid(row=2, column=3)
        Button(self.frame3, text="home", command=self.choice_page).grid(row=2, column=4)

    def add_bus_details(self):
        root = self.create_window()
        Label(self.frame3, text=" " * 55).grid(row=0, column=0)
        Button(self.frame3, text="New Route", command=self.bus_route, padx=10, pady=5).grid(row=0, column=1)
        Button(self.frame3, text="New Bus ", command=self.bus_details, padx=10, pady=5).grid(row=0, column=2)
        Button(self.frame3, text="New Run", command=self.bus_running_detail, padx=10, pady=5).grid(row=0, column=5)
        Button(self.frame3, text="New Operator", command=self.operator, pady=5).grid(row=0, column=6)
        Button(self.frame3, text="home", command=self.choice_page).grid(row=1, column=6)

    def bus_route(self):
        root = self.create_window()
        Label(self.frame2, text=" " * 27).grid(row=2, column=0)
        Label(self.frame2, text="Add Route Details ", font="areal 14 bold ", fg="green", bg="yellow").grid(row=2,
                                                                                                           column=2)
        Label(self.frame2, text="route id ").grid(row=3, column=0)
        self.r_id = IntVar()
        Entry(self.frame2, textvariable=self.r_id).grid(row=3, column=1)
        Label(self.frame2, text="station name: ").grid(row=3, column=2)
        self.r_stname = StringVar()
        Entry(self.frame2, textvariable=self.r_stname).grid(row=3, column=3)
        Label(self.frame2, text="station id ").grid(row=5, column=0)
        self.r_stid = IntVar()
        Entry(self.frame2, textvariable=self.r_stid).grid(row=5, column=1)

        def add_data():
            try:
                cursor.execute(
                    f"insert into route values ({self.r_id.get()},'{self.r_stname.get()}',{self.r_stid.get()});"
                )

                mydb.commit()
                tkmsg.showinfo("confirmation", "Data inserted")
            except Exception as e:
                tkmsg.showerror(f"{e}")

        Button(self.frame2, text="add route ", command=add_data).grid(row=5, column=2)
        Button(self.frame2, text="Home", command=self.choice_page).grid(row=5, column=3)

    def operator(self):
        root = self.create_window()
        Label(self.frame3, text=" " * 30, font="areal 15 bold italic").grid(row=0, column=0)
        Label(self.frame3, text="Add Operator Details ", font="areal 15 bold italic").grid(row=0, column=3)
        self.op_id = IntVar()
        Entry(self.frame3, textvariable=self.op_id).grid(row=1, column=3)
        Label(self.frame3, text="op id:").grid(row=1, column=2)
        self.op_name = StringVar()
        Entry(self.frame3, textvariable=self.op_name).grid(row=1, column=6)
        Label(self.frame3, text="op name: ").grid(row=1, column=5)
        self.op_add = StringVar()
        Entry(self.frame3, textvariable=self.op_add).grid(row=2, column=3)
        Label(self.frame3, text="op addr: ").grid(row=2, column=2)
        self.op_mail = StringVar()
        Entry(self.frame3, textvariable=self.op_mail).grid(row=2, column=6)
        Label(self.frame3, text="op mail: ").grid(row=2, column=5)
        self.op_mob = IntVar()
        Entry(self.frame3, textvariable=self.op_mob).grid(row=3, column=3)
        Label(self.frame3, text="op mob: ").grid(row=3, column=2)

        def add_data():
            try:
                cursor.execute(
                    f"INSERT INTO operator values ({self.op_id.get()},'{self.op_name.get()}','{self.op_add.get()}',{self.op_mob.get()},'{self.op_mail.get()}');")
                mydb.commit()
                tkmsg.showinfo("confirmation", "Data inserted")
            except Exception as e:
                tkmsg.showerror(f"{e}")

        Button(self.frame3, text="add operator ", command=add_data).grid(row=3, column=5)
        Button(self.frame3, text="Home", command=self.choice_page).grid(row=3, column=6)

    def bus_running_detail(self):
        root = self.create_window()

        Label(self.frame2, text="BUS RUNNING DETAILS", font="areal 13 bold italic", fg="green", bg="yellow").grid(
            row=2, column=2)
        Label(self.frame3, text=" " * 19).grid(row=0, column=0)
        Label(self.frame3, text="bus ID ").grid(row=0, column=1)
        self.nwbid = IntVar()
        Entry(self.frame3, textvariable=self.nwbid).grid(row=0, column=2)
        Label(self.frame3, text="run date").grid(row=0, column=3)
        self.nwdt = IntVar()
        Entry(self.frame3, textvariable=self.nwdt).grid(row=0, column=4)
        Label(self.frame3, text="avl seats").grid(row=0, column=5)
        self.nwsts = IntVar()
        Entry(self.frame3, textvariable=self.nwsts).grid(row=0, column=6)

        def add_run():
            try:
                run_date_str = str(self.nwdt.get())#CAST(? AS DATE)

                cursor.execute("INSERT INTO run VALUES (?, ? , ?);",
                               (self.nwbid.get(), run_date_str, self.nwsts.get()))
                mydb.commit()

                tkmsg.showinfo("Confirmation", "Data inserted")
            except Exception as e:
                tkmsg.showerror("Error", f"Error: {e}")
                print("Exception:", e)

        def delete_run():
            try:
                cursor.execute(f"delete from run where bid = {self.nwbid.get()};")
                mydb.commit()
                tkmsg.showinfo("confirmation ", "data deleted ")
                pass
            except Exception as e:
                tkmsg.showerror(f"{e}")

        Button(self.frame3, text="Add Run", command=add_run).grid(row=1, column=3)
        Button(self.frame3, text="Delete Run", command=delete_run).grid(row=1, column=4)
        Button(self.frame3, text="Home", command=self.choice_page).grid(row=1, column=5)

    def bus_details(self):
        root = self.create_window()
        Label(self.frame2, text="add bus details", font="areal 16 bold", fg="orange").grid(row=2, column=2)
        Label(self.frame3, text="  bus id ").grid(row=0, column=0)
        self.bid = IntVar()
        Entry(self.frame3, textvariable=self.bid).grid(row=0, column=1)
        Label(self.frame3, text="bus type ").grid(row=0, column=2)
        self.bus_type = StringVar()
        self.bus_type.set("Select Bus Type")
        opt = ["2x2", "AC 2x2", "3x2", "AC 3x2"]
        d_menu = OptionMenu(self.frame3, self.bus_type, *opt)
        d_menu.grid(row=0, column=3)
        Label(self.frame3, text="capacity ").grid(row=0, column=4)
        self.cap = IntVar()
        Entry(self.frame3, textvariable=self.cap).grid(row=0, column=5)
        Label(self.frame3, text=" price ").grid(row=0, column=6)
        self.price = IntVar()
        Entry(self.frame3, textvariable=self.price).grid(row=0, column=7)
        Label(self.frame3, text="operator id ").grid(row=1, column=2)
        self.op_id = IntVar()
        Entry(self.frame3, textvariable=self.op_id).grid(row=1, column=3)
        Label(self.frame3, text=" root id ").grid(row=1, column=4)
        self.rt_id = IntVar()
        Entry(self.frame3, textvariable=self.rt_id).grid(row=1, column=5)
        Button(self.frame3, text="home", command=self.choice_page).grid(row=1, column=6)

        def add_bus():

            try:
                query = "INSERT INTO bus_details VALUES (?, ?, ?, ?, ?, ?);"
                values = (
                    self.bid.get(),
                    self.bus_type.get(),
                    self.cap.get(),
                    self.price.get(),
                    self.op_id.get(),
                    self.rt_id.get()
                )

                cursor.execute(query, values)
                mydb.commit()
                tkmsg.showinfo("confirmation", "data inserted")
            except Exception as e:
                tkmsg.showerror(f"{e}")

        Button(self.frame4, text="add bus", command=add_bus).grid(row=0, column=4)


page = bus_booking_system()
page.homepage()
mainloop()
