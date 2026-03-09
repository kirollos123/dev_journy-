class employee:
     def print_empl(obj):
        print ('name=',obj.name)
        print ('age=',obj.address)
        print ('salary=',obj.salary)

#  x=1 
kirollos=employee()
kirollos.name='kirollos'
kirollos.address='cairo'
kirollos.salary=1000
employee.print_empl(kirollos)
# any funtion into class is called method and the first parameter is the object itself and by convention we call it self