import sys


def get_ints(): return list(map(int, sys.stdin.readline().strip().split()))
def cin(): return int(input())

MAX=100
n = 0
a=[0]*100
xuoi = [0]*100
nguoc = [0]*100
arr = [0]*100
global count
count=0
def xh(i):
    global count
    for j in range(1, n+1):
        if(not a[j] and not xuoi[i-j+n] and not nguoc[i+j-1]):
            arr[i]=j
            a[j]=1
            xuoi[i-j+n]=1
            nguoc[i+j-1]=1
            if i==n:
                count+=1
            else:
                xh(i+1)
            a[j]=0
            xuoi[i-j+n] = 0
            nguoc[i+j-1] = 0


if __name__ == "__main__":
   
    t=cin()
    for tt in range(t):
        n = cin()
        xh(1)
        print(count)
# !WA