import sys


def cin(): return int(input())


def solve(Str):
    f = dict()
    max_f = 0
    for j in range(len(Str)):
        f[Str[j]] = f.get(Str[j], 0) + 1
        if (f[Str[j]] > max_f):
            max_f = f[Str[j]]
    # print(f)
    if (max_f <= (len(Str) - max_f + 1)):
        return True
    return False


t = cin()
for tt in range(t):
    Str = input().strip()
    if (solve(Str)):
        print(1)
    else:
        print(-1)
