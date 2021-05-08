import sys
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def cin(): return int(input())


t = cin()
for i in range(t):
    n = cin()
    a = get_ints()
    a.sort()
    # print(a)
    if(a[n-1] == a[0]):
        print(-1)
    else:
        print(a[0],end=' ')
        for ele in a:
            if ele!=a[0]:
                print(ele,end='')
                break
        print()
