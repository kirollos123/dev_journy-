def max_num(a, b, c):
    print("entrt nuber a: ")
    a = int(input())
    print("entrt nuber b: ")
    b = int(input())        
    print("entrt nuber c: ")
    c = int(input())
    if a>b and a>c: 
        print("max number is: ",a)
        if b>c and a>c:
            print("second max number is: ",b)
        else:
            print("second max number is: ",c)
    return max(a, b, c)