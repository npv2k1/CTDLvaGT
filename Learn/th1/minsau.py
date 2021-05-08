import sys
from queue import PriorityQueue

def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))


def cin(): return int(input())





def solve(Str,k):
    f = []

    for j in set(Str):
        f.append(Str.count(j))
    f.sort()

    print(f)
    
    

t = cin()
for tt in range(t):
    k=cin()
    Str = input().strip()
    solve(Str,k)
