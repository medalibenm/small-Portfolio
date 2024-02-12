# lignes = int(input("enter number of lines : "))
base = int(input("enter your number : "))
while base % 2 == 1 :
    base = int(input("enter your number : "))
line = 0
save = base

while base >= 2 :
    print(line*" ", end="")
    print(base*"#")
    line += 1
    base -= 2
base = 2
line = int((save-2)/2)
while base< save :
    line -= 1
    base += 2
    print(line*" ", end="")
    print(base*"#")