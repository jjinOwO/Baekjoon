n = int(input())
paper = [[0] * 100 for k in range(100)]
for _ in range(n):
    w, h = map(int, input().split())
    for i in range(w, w+10):
        for j in range(h,h+10):
            paper[i][j] = 1

cnt = 0
for i in range(100):
    cnt += paper[i].count(1)

print(cnt)