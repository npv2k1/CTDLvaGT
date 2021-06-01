
import sys


from queue import Queue
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))


MAX_COUNT = 20000


vec = []


def generateNumbersUtil():
    global vec

    q = Queue()

    q.put("-")
    q.put("*")

    for count in range(MAX_COUNT, -1, -1):
        s1 = q.queue[0]
        q.get()

        vec.append(s1)

        s2 = s1

        s1 += "-"
        q.put(s1)

        s2 += "*"
        q.put(s2)


def findSmallestMultiple(n, a, b):
    global vec

    for i in range(len(vec)):
        tmp = a
        for l in vec[i]:
            if(l == '-'):
                tmp -= 1
            if(l == "*"):
                tmp *= 2
        if(tmp == b):
            print(len(vec[i]))
            return


generateNumbersUtil()

def cin(): return int(input())


t = cin()
for i in range(t):
    a, b = get_ints()
    findSmallestMultiple(7, a, b)
