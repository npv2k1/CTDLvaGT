t = int(input())
while(t):
    n = int(input())
    a = [9]
    res = [9]
    ok = False
    while(not ok):
        x = a.pop(0)
        # if(len(str(x)) == n):
        #     break
        res.append(x*10+0)
        res.append(x*10+9)
        while(len(res)>0):
            l =res.pop(0)
            if(l%n==0):
                print(l)
                ok = True
            break
        a.append(x*10+0)
        a.append(x*10+9)


    # for i in range(len(res)-1, -1, -1):
    #     print(res[i], end=' ')
    # print()

    t -= 1