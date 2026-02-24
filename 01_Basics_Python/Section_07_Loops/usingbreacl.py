while True:
    x, y = map(float, input().split())
    if y == 0:
        print("y is zero")
        break
    print(x / y)
print("End")   
    

# This loop continuously takes two numbers as input, divides the first by the second,
# and handles the case when the second number is zero by printing a message and exiting the loop