class Employee:
    def __init__(self, name, ID, salary, dep):
        self.name = name
        self.ID = ID
        self.salary = salary
        self.dep = dep

    def calculate_salary(self, salary, hours):
        overtime = 0
        if hours > 50:
            overtime = hours-50
        self.salary = self.salary+(overtime*(self.salary)/50)

    def assign_dep(self, emp_dep):
        self.dep = emp_dep
    
    def print_employee_details(self):
        print("/nName:",self.name)
        print("ID: ", self.ID)
        print("Salary: ", self.salary)
        print("Department: ", self.dep)
        print("----------------------")
employee1 = Employee("ADAMS", "E7876", 50000, "ACCOUNTING")
employee2 = Employee("JONES", "E7499", 45000, "RESEARCH")
employee3 = Employee("MARTIN", "E7900", 50000, "SALES")
employee4 = Employee("SMITH", "E7698", 55000, "OPERATIONS")


print("Original Employee Details:")
employee1.print_employee_details()
employee2.print_employee_details()
employee3.print_employee_details()
employee4.print_employee_details()


employee1.assign_dep("OPERATIONS")
employee4.assign_dep("SALES")

employee2.calculate_salary(45000, 52)
employee4.calculate_salary(45000, 60)

print("Updated Employee Details:")
employee1.print_employee_details()
employee2.print_employee_details()
employee3.print_employee_details()
employee4.print_employee_details()
