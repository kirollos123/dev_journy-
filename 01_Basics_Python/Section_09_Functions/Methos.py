class Employee:
    name = None
    salary = None
    address = None


def print(self):
    print('name', self.name)
    print('salary=', self.salary)
    print('address=', self.address)


def read(self):
    self.name = input('enter name: ')
    self.salary = float(input('enter salary: '))
    self.address = int(input('enter address: '))


kirollos = Employee()
kirollos.read()
kirollos.print()
