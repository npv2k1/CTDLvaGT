import sys
def get_ints(): return list(map(str, sys.stdin.readline().strip().split()))
def cin(): return int(input())

t=cin()
for i in range(t):
    n = get_ints()
    a = get_ints()
    res=''.join(a)    
    print(' '.join(sorted(set(res))))
    print()
