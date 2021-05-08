import sys


def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))


def cin(): return int(input())


t = cin()
for i in range(t):
    n = cin()
    a = get_ints()
    s = sum(a)
    if(s%2!=0):
        print("NO")
    else:
        print("YES")