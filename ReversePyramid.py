def RevPyramid(n):
    for i in range(n):
        for j in range(0,i):
            print(".", end ="")
        for k in range(0,2*n-2*i-1):
            print("*", end ="")
        for l in range(0,i):
            print(".", end ="")
        print()
n =int(input())
RevPyramid(n)
