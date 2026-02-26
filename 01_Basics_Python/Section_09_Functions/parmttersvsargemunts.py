def print_menu():
    while True:
        print('\n\nmenu:')
        print ('Enter 1 to sum numbers from 1 to N')
        print('Enter 2 to evaluate simple 2 numbers expression (e.g. 2 + 3)')
        print('Enter 3 to exit')
        user_input=input('\nEnter choice from 1 to 3: ')
        if user_input!= '1'and user_input!='2'and user_input !='3':
             print('Invalid Input...Try again')
             continue
        else :
            return user_input
def sum_1_to_n(n):
    n=int (input ('Enter a number: '))
    sum = (n*(n+1))//2
    print ('sum form 1 to ',n , 'is' ,sum )
def divide(num1 ,num2 , opreation ):
    if num2==0:
        result =None
    elif opreation =='/':
        result = num1/num2
    else :
        result = num1//num2 
    return result
def expression():
    num1 ,opreation , num2 =input ('Enter expression ').split()
    num1,num2= float(num1), float(num2)
    if opreation =='+':
        result=num1+num2
    elif opreation =='-':
        result= num1 -num2
    elif opreation =='*':
          result= num1 * num2
    elif opreation =='**':
            result= num1 ** num2
    else: 
         result= divide(num1,num2,opreation)
    if result !=None:
              print('result is: ',result)
    else:              print('Error: division by zero')

def calculator_interface():
     while True :
          user_input=print_menu()
          if user_input =='1':
                sum_1_to_n()
          elif user_input =='2':
                expression()
          else:
                print('Good bye')
                break   

calculator_interface()