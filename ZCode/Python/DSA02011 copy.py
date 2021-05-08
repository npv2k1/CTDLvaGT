import sys
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def cin(): return int(input())
t = cin()
for i in range(t):
    n, s = get_ints()
    a= get_ints()
    a.sort()
    a.reverse()
    tong=0
    d=s
    for i in a:
        d-=i
        tong+=1
        if(d==0):
            print(tong)
            break
        elif(d<0):
            print(-1)
