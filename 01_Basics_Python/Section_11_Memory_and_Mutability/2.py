class employee:
    def __init__(self):
        self.id = 0


def inc_id(emp):
    print(id(emp))
    emp.id += 1


obj1 = employee()
obj2 = obj1
print(id(obj1))
print(id(obj1))

print(obj1.id)
inc_id(obj2)
print(obj1.id)
print(obj2.id)
