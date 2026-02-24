b = 20
c = 6

def f():
    b = c + 1
    print(b)
    return b

f()
print(b)

b = f()
print(b)