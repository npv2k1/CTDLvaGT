import sys
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def cin(): return int(input())


def maxSquare(M, n, m):

    d = [[0 for k in range(m)] for l in range(n)]
    for i in range(1, n):
        for j in range(1, m):
            if (M[i][j] == 1):
                d[i][j] = min(d[i][j-1], d[i-1][j],
                              d[i-1][j-1]) + 1
            else:
                d[i][j] = 0
    maxArr= d[0][0]

    for i in range(n):
        for j in range(m):
            if (maxArr < d[i][j]):
                maxArr = d[i][j]
               
    print(maxArr)


t = cin()
for tt in range(t):
    n, m = get_ints()
    arr = list()
    for i in range(n):
        arr.append(get_ints())
    maxSquare(arr,n,m)
