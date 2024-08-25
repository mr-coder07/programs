def currency_notes(amount):
    note_1000 =0
    note_100 =0
    note_50 =0
    note_10 =0

    note_1000 =  amount//1000
    amount = amount%1000

    note_100 = amount//100
    amount = amount%100

    note_50= amount//50
    amount = amount%50

    note_10 = amount//10
    amount = amount/10

    return note_10, note_100, note_50, note_1000

amnt = int(input("enter amount in multiples of 10"))

note_10, note_100, note_50, note_1000 = currency_notes(amnt)
print(note_10)
print(note_50)
print(note_100)
print(note_1000)