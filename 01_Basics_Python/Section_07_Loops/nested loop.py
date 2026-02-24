T = int(input())
while T > 0:
    num = int(input())
    total = 0
    start = 1
    while start <= num:
        total += start
        start += 1
    print(f"sum 1 to {num} = {total}")
    T -= 1