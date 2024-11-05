n = int(input())
m = int(input())
s = list(input())

check = list()
result = 0
for i in range(2*n+1):
    if(i % 2 == 0):
        check.append('I')
    else:
        check.append('O')
       
for i in range(m):
    if(s[i] == 'I' and i < m-2*n):
        j = i
        cnt = 0
        for k in range(2*n+1):
            if(check[k] == s[j]):
                cnt += 1
            j+=1
        if(cnt == 2*n+1):
            result += 1
print(result)                