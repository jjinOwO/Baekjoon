n, m = map(int,input().split())
people = list(range(1,n+1))
now = 0

print('<', end = '')
while people:
    now = (now + m - 1) % len(people)

    if len(people) == 1:
        print(people.pop(now), end = '')
    
    else:
        print(people.pop(now), end = ', ') 

print('>', end = '')