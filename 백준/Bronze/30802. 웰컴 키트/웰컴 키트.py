n = int(input())
size = list(map(int,input().split()))
t, p = map(int, input().split())

ts = 0

for i in range(6):
    if size[i] > 0:
        ts += (size[i]+t-1)//t


print(ts)
print(n//p,n%p)