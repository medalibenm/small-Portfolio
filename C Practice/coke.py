due = 50
sum = 0
while sum < 50 :
    print("amount due :", due)
    coin = int(input("insert coin : "))
    if coin == 25 or coin == 5 or coin == 10 :
        sum +=coin
        due = due - coin

print("Change is :", sum-50)