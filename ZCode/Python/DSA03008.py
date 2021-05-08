import sys


def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))


def cin(): return int(input())


def sortedValue(ele):
    return ele[1]


t = cin()
for i in range(t):
    n = cin()
    a = get_ints()
    b = get_ints()
    d = []
    for i in range(n):
        d.append([a[i], b[i]])
    d.sort(key=lambda x: x[1])
    c = 1
    i = 0
    cur = d[0]
    for i in range(n):
        for j in range(i, n):
            if(d[j][0] >= cur[1]):
                c += 1
                cur = d[j]

    print(c)
