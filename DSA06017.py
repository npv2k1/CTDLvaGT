import sys
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def cin(): return int(input())


def cout(a):

    for i in list(sorted(a)):
        print(i, end=' ')
    print()

t = cin()
for i in range(t):
    n, m = get_ints()
    a = get_ints()
    b = get_ints()
    cout(list(a[:]+b[:]))
