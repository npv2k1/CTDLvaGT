import os
import time
import subprocess
t = time.time()
subprocess.run(['g++','code.cpp','-o','tmp.exe'])
# try:
#     os.system("g++ code.cpp -o tmp.exe")
# except:
#     print("ERR")
os.system("tmp.exe < input.txt > tmp.txt")
print(time.time()-t)
f = open('output.txt','r').read().strip();
tmp = open('tmp.txt','r').read().strip();
if(f==tmp):
    print("OK")
else:
    print("WA")
