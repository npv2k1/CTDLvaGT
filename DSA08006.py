import sys


def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))


def cin(): return int(input())


def sort_dict_by_value(d, reverse=False):
    return dict(sorted(d.items(), key=lambda x: x[1], reverse=reverse))


t = cin()
for i in range(t):
    n = cin()    
    a=[9,0]
    res=[9]
    while True:
        if(int(''.join(res))%n==0):
            break
        for i in a:
            if(res[len(res)-1]==9):
                res.append(a[1])
            else:
                res.append(a[0])
