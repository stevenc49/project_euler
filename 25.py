                                                                                                                                    
memo = {0:0, 1:1}
def fib(n):
    if not n in memo:
        memo[n] = fib(n-1) + fib(n-2)
    return memo[n]

n=0
while( len(str(fib(n))) != 1000 ):
    n+=1

print n
