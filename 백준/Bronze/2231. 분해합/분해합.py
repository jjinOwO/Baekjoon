import sys

n = int(sys.stdin.readline())

k = 0

for i in range(n+1, 1, -1):
    a = i%10
    b = (i//10)%10
    c = (i//100)%10
    d = (i//1000)%10
    e = (i//10000)%10
    f = (i//100000)%10
    g = (i//1000000)%10
    
    if(n == i + a + b + c + d + e + f + g):
        k = i

if(k == 0):
    sys.stdout.write("0") 
    
else:
    sys.stdout.write(str(k))