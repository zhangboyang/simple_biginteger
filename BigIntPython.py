while True:
    line = input()
    if line == '@':
        break;
    op, A, B = line.split()
    a = int(A)
    b = int(B)
    if op == '+':
        print(a + b)
    elif op == '*':
        print(a * b)
    elif op == '-':
        print(a - b)
    elif op == '/':
        if b != 0:
            if ((a < 0 and b > 0) or (a > 0 and b < 0)) and a % b != 0:
                print(a // b + 1)
            else:
                print(a // b)
        else:
            print("ERROR: divided by zero.")
