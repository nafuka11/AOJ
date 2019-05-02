n = int(input())
R = [int(input()) for _ in range(n)]

min_R = R[0]
profit = -2000000000

for i in range(1, n):
    profit = max(profit, R[i] - min_R)
    min_R = min(min_R, R[i])

print(profit)
