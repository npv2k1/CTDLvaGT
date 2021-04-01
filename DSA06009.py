import sys
def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def cin(): return int(input())

def findsum(A, arr_size, sum):
    res=0
    for i in range(0, arr_size-1):
        curr_sum = sum - A[i]
        j=i+1
        while(curr_sum in A[j:]):
            res+=1
            j+=1     
    print(res)


t = cin()
for i in range(t):
    n, m = get_ints()
    a = get_ints()
    findsum(a,n,m)
