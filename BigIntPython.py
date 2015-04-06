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
        if a >= b:
            print(a - b)
        else:
            print("ERROR: a is less than b.")
    elif op == '/':
        if b != 0:
            print(a // b)
        else:
            print("ERROR: divided by zero.")
