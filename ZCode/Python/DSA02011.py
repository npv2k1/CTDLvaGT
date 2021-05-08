import sys
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def cin(): return int(input())


t = cin()
for i in range(t):
    n, s = get_ints()
    a = get_ints()
    a.sort()
    a.reverse()
    tong = 0
    d = s
        