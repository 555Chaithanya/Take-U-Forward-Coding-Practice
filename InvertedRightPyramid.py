n= int(input())
def InvRightPattern(n):
    for i in reversed(range(1, n+1)):
        for j in reversed(range(1,i+1)):
            print("*", end = "")
        print()
InvRightPattern(n)