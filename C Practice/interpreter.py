expression = input("enter your expression : ")

x,y,z = expression.split()
x =  int(x)
z =  int(z)

if y == '+' :
    print(float(x+z))
elif y == '-' :
    print(float(x-z))
elif y == '*' :
    print(float(x*z))
elif y == '/' :
    if z == 0 :
        print("math error")
    else :
        print(float(x/z)) 
else :
    print("enter a proper operator")