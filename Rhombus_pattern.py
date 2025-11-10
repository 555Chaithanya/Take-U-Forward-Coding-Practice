def erect_pyramid(n):
    for i in range(n):
        for j in range(n-i-1):
            print(".", end = "")
        for k in range(2*i+1):
            print("*", end = "")
        for l in range(n-i-1):
            print(".", end = "")
        print()
def inverted_pyramid(n):
    for i in range(n):
        for j in range(i):
            print(".", end = "")
        for k in range(2*n-2*i-1):
            print("*", end = "")
        for l in range(i):
            print(".", end = "")
        print()
            
n=int(input())
erect_pyramid(n)
inverted_pyramid(n)
    
    
    
        
