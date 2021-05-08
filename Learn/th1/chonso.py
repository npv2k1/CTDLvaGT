import sys


def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))


def cin(): return int(input())


t = cin()
for i in range(t):
    n,k =  get_ints()
    arr=[]
    col=[8]*n
    row=[0]*n
    
    for i in range(n):
        tmp=get_ints()
        arr.append(tmp)
    for i in arr:
        col.append(sum(i))
        for j in range(n):
            row[j] +=i[j]
    c=0
    for i in range(n):
        tmp=
        if((k-i) in 