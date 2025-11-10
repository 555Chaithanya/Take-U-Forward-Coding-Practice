n=int(input())
def RevNumSteps(n):
    for i in reversed(range(1,n+1)):
        for j in range(1,i+1):
            print(j,end ="")
        print()
RevNumSteps(n)