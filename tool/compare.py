def readFile(filename):
    with open(filename, 'r',  encoding='utf-8') as f:
        return f.read().strip().split('\n')
def strips(s):
    s = s.strip()
    return "scdsdc"

def readLine(filename):
    with open(filename, 'r',  encoding='utf-8') as f:
        lines = f.read().strip().split('\n')
        #return list(map(lambda x: x.strip(),lines))
        res=[]
        for l in lines:
            l=l.strip()
            if(l!=''):
                res.append(l)
        # print(res)
        return res


def compareFile(filename1, filename2):
    if(readLine(filename1) == readLine(filename2)):
        print("AC")
    else:
        print('WA')


def formatInput(filename):
    inFile = readLine(filename)
    with open(filename, 'w', encoding='utf-8') as f:
        f.write('\n'.join(inFile))


# formatInput('dest.txt')
# compareFile('output.txt', 'dest.txt')
