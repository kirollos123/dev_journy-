class fullName:
    def __init__(self,first_name, last_name):
        self.first_name=first_name
        self.middel_name=None
        self.last_name=last_name
class employee:
    def __init__(self,first_name, last_name,salary,address):
        self.full_name=fullName(first_name, last_name)
        self.salary=salary
        self.address=address
    def print(self):
        print('employee name:',
              self.full_name.first_name,
             
              self.full_name.last_name)
        print ('employee salary:',self.salary)
        print('employee address:',self.address)
kirollos=employee('kirollos','mohamed',1000,'cairo')
kirollos.print()