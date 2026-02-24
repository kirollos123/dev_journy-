num , pow = map (int , input ().split())
python_result =num ** pow
our_result =1
while pow >=1:
    our_result *= num
    pow -=1
print (our_result)
assert python_result == our_result ,' Results do not match '
