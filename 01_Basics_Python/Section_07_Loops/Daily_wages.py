Hourly_wage= float(input("Enter your hourly wage: "))
Hours_worked= float(input("Enter the number of hours you worked: "))
Day_of_the_week=str(input("Enter the day of the week: "))

Salary= Hourly_wage*Hours_worked
if Day_of_the_week=="Saturday" or Day_of_the_week=="Sunday":
    Salary= Salary*2
print("Your daily wage is: ", Salary)