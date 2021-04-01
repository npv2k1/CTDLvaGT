import sys
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def cin(): return int(input())

t=cin()
for i in range(t):
    n= cin()
    a= list(get_ints())
    opt=0
    while(len(a)>1):
        first = a.pop()       
        second = a.pop()
        opt=first+second
        a.append(opt)    
    print(opt)