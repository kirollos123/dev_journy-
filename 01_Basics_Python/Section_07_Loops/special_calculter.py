while True:
    print('\nMenu:')
    print('Enter 1 to sum numbers 1 to n')
    print('Enter 2 to evaluate simple expression (e.g. 2 + 3)')
    print('Enter 3 to exit the program')

    user_inp = input('\nEnter choice from 1 to 3: ')

    if user_inp not in ['1', '2', '3']:
        print('Invalid input, please try again')
        continue 
    if user_inp == '1':
        n = int(input('Enter number: '))
        total = n * (n + 1) // 2
        print('Sum from 1 to', n, 'is', total)

    elif user_inp == '2':
        try:
            num1, opretion, num2 = input('Enter a simple expression (e.g. 2 + 3): ').split()
            num1, num2 = float(num1), float(num2)
            result = None

            if opretion == '+':
                result = num1 + num2
            elif opretion == '-':
                result = num1 - num2
            elif opretion == '*':
                result = num1 * num2
            elif opretion == '**':
                result = num1 ** num2
            elif opretion == '/':
                if num2 == 0:
                    print('Error: division by zero')
                else:
                    result = num1 / num2
            elif opretion == '//':
                if num2 == 0:
                    print('Error: division by zero')
                else:
                    result = num1 // num2
            else:
                print('Unknown operator')

            if result is not None:
                print('The result is:', result)
        except ValueError:
            print('Invalid input format. Example: 2 + 3')

    else:  
        print('Exiting the program...')
        break
