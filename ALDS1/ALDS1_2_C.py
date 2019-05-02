def bubble_sort(C, N):
    for i in range(N):
        for j in range(N-1, i, -1):
            if C[j][1] < C[j-1][1]:
                C[j-1], C[j] = C[j], C[j-1]


def selection_sort(C, N):
    for i in range(N):
        minj = i
        for j in range(i, N):
            if C[j][1] < C[minj][1]:
                minj = j
        C[i], C[minj] = C[minj], C[i]


N = int(input())
cards = input().split()

C1 = cards.copy()
bubble_sort(C1, N)
print(" ".join(C1))
print("Stable")

C2 = cards.copy()
selection_sort(C2, N)
print(" ".join(C2))
if C1 == C2:
    print("Stable")
else:
    print("Not stable")
