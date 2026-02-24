# while True:
#     x, y = map(float, input().split())
#     if y == 0:
#         print("y is zero")
#         continue
#     print(x / y)
# print("End")   
    
n = 60
     
while n > 5:
        if n == 7:
            n = 70
            continue
     
        if n % 2 == 0:
            n //= 2
        else:
            n = (n - 1) // 2
     
        if n == 8:
            break
     
print(n)