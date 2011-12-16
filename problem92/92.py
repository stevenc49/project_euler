import math
import sys

nextSeqMap={1:1, 89:89}
endNumMap={1:1, 89:89}

def getNextSeq(n):
    if not n in nextSeqMap:
        strNum = str(n)
        sum=0
        for ch in strNum:
            sum += int( math.pow(int(ch), 2) )
        nextSeqMap[n] = sum
        return sum
    return nextSeqMap[n]

def getEndNum(n):
    i = n
    while not (n==1 or n==89):
        n = getNextSeq(n)        
    endNumMap[i]=n
    
    return endNumMap[n]

if __name__ == '__main__':
    count=0
    for n in range(int(sys.argv[1]), 1, -1):
        n = getEndNum(n)
        if n==89:
            count+=1
    
    print "unhappy numbers: ", count
