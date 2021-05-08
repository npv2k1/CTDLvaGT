import sys


def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))


def cin(): return int(input())


def sort_dict_by_value(d, reverse=False):
    return dict(sorted(d.items(), key=lambda x: x[1], reverse=reverse))


t = cin()
for i in range(t):
    n = cin()
    a = get_ints()
    b = sorted(set(a))
    d = {}
    for i in b:
        d[i] = a.count(i)
    d = sort_dict_by_value(d, reverse=True)
    
    for i in d.keys():
        for j in range(d[i]):
            print(i, end=' ')
    print()
