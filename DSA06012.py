import sys
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def cin(): return int(input())

t=cin()
for i in range(t):
    n,k = get_ints()
    a= get_ints()
    a.sort()
    for i in range(k):
        print(a.pop(),end=' ')
    print()