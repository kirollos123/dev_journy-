class employee:
    def print_empl(obj):
        print('name=', obj.name)
        print('age=', obj.address)
        print('salary=', obj.salary)


def print_epml(object):
    print('name=', object.name)
    print('salary=', object.salary)
    print('age=', object.address)


def red_empl():# function to read employee data from user and return an object of employee
    obj = employee()
    obj.name = input("enter name: ")
    obj.salary = float(input("enter salary: "))
    obj.address = int(input("enter address: "))
    return obj


kirollos = red_empl()
print_epml(kirollos)
