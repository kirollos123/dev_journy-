points=int(input("Enter your loyalty points: "))
if points<100:
    bouns= points * 0.1
    print("Congratulations! You have earned a loyalty bonus.the bonus is 10 %" , bouns)
     
elif points > 100:
    bouns= points * 0.15
    print("Keep collecting points to earn a loyalty bonus.the bonus is 15 %" ,bouns)
