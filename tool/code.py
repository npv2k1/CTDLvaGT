import os
import time
import subprocess
import compare

compileTimeout = 5
runTimeout = 5
compare.formatInput('input.txt')
compare.formatInput('dest.txt')
compileProc = subprocess.run(
    ['g++', 'code.cpp', '-o', 'tmp.exe'], timeout=compileTimeout, capture_output=True)
err = compileProc.stderr

if err != b'':
    print("Compile ERROR", err.decode())
else:
    try:
        t = time.time()
        runProc = subprocess.Popen(
            args=["tmp.exe"], stdout=subprocess.PIPE, stdin=subprocess.PIPE)
        grep_stdout = runProc.communicate(
            input=open('input.txt', 'rb').read(), timeout=runTimeout)[0]
        print(grep_stdout.decode())
        with open("output.txt", 'w', encoding='utf-8', newline='\n') as f:
            f.write(grep_stdout.decode())
        print("RUN TIME: ", (time.time()-t))
        compare.compareFile('output.txt', 'dest.txt')
    except Exception:
        print("TLE")
        runProc.kill()
