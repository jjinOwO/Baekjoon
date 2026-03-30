n, m = map(int,input().split())
dogam1 = {}
dogam2 = {}
for i in range(n):
    name = input().strip()
    num = i+1
    dogam1[name] = num #name:num
    dogam2[num] = name #num:name
result = [input() for _ in range(m)]
for i in range(m):

    if result[i].isdigit():
        print(dogam2[int(result[i])])
    else:
        print(dogam1[result[i]]) 