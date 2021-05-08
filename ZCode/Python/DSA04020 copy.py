t =int(input())
while(t):
    n,k = [int(x) for x in input().split()]
    arr = [int(x) for x in input().split()]
    try:
       print(arr.index(k)+1)
    except ValueError:
        print('NO')
    t-=1
