
import sys
from queue import PriorityQueue


def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def cin(): return int(input())


t = cin()
for i in range(t):
    n = cin()
    a = PriorityQueue(n)
    p = (get_ints())
    for i in p:
        a.put(i)
    # print(a)
    tong = 0
    while a.qsize() > 1:
        tmp = a.get()+a.get()
        a.put(tmp)
        tong += tmp
    print(tong)
