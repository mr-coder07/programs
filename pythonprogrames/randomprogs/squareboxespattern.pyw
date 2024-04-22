
def box_pattern(boxes):
    rows = cols = boxes * 5

    for i in range(rows):
        for j in range(cols):
            if i == j == 0:
                print("+", end=" ")
            elif (i + 1) % 5 == 0 and (j + 1) % 5 == 0:
                print("+", end=" ")
            elif (i + 1) % 5 != 0 and j == 0 or (j + 1) % 5 == 0:
                print("|", end=" ")
            elif j == 0 and (i + 1) % 5 != 0:
                print("|", end=" ")
            elif i == 0 and ((j + 1) % 5 != 0 or (i + 1) % 5 == 0):
                print("-", end=" ")
            elif (i + 1) % 5 == 0 and (j + 1) % 5 != 0:
                print("-", end=" ")
            else:
                print(" ", end=" ")
        print()

boxes = int(input("Enter the number of boxes: "))
box_pattern(boxes)