import sys
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def cin(): return int(input())

t=cin()
for i in range(t):
    n = cin()
    arr = get_ints()
    arr.sort()
    c=0
    for e in range(0,len(arr)-1):
        if(arr[e+1]-arr[e]>1):
            c+=arr[e+1]-arr[e]-1
    print(c)
