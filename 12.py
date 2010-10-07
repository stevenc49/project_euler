def numDivisors(n):

    numDivisors = 1

    for i in range(1, n):
        if n%i == 0:
            numDivisors+=1
            
    return numDivisors

n=1
while numDivisors(n) <= 500:
    n+=1
#    out = n + " " + numDivisors(n)
    #print numDivisors(n)

print n
