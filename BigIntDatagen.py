import random
M = 100
N = 100
L = 20
P = 500
Q = 100
oplist = "+-*/"
for op in oplist:
    for a in range(0, M):
        for b in range(0, N):
            print(op, a, b)
for op in oplist:
    for c in range(0, L):
        print(op, end=' ')
        print(random.randint(1, 9), end='')
        for i in range(1, P):
            print(random.randint(0, 9), end='')
        print(end=' ')
        print(random.randint(1, 9), end='')
        for i in range(1, Q):
            print(random.randint(0, 9), end='')
        print()

print('@')
