class employee:
    def __init__(self, name, salary, address):
        self.name = name
        self.salary = salary
        self.address = address

    def print(self):   
        print('name', self.name)
        print('salary', self.salary)
        print('address', self.address)


kirollos = employee('kirollos', 1000, 'cairo')
kirollos.print()