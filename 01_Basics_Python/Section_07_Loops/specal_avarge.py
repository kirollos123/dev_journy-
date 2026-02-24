even_sum, odd_sum, even_count, odd_count = 0, 0, 0, 0

n = int(input("Enter a number: "))
cnt = 1

while cnt <= n:
    try:
        value = float(input(f"Enter number {cnt}: "))
    except ValueError:
        print("الرجاء إدخال رقم صحيح!")
        continue  # يرجع للـ while من غير ما يزيد العدّاد

    if cnt % 2 == 0:
        even_sum += value
        even_count += 1
    else:
        odd_sum += value
        odd_count += 1

    cnt += 1

odd_avg = odd_sum / odd_count if odd_count != 0 else 0
even_avg = even_sum / even_count if even_count != 0 else 0

print("Odd average:", odd_avg)
print("Even average:", even_avg)
