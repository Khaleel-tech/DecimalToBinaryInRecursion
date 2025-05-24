def DecToBin(num):
    ans=0  #this will store our final answer
    pow=1  #//this is used to multiply in order to get answer, 10^0,10^1,10^2
    # now loop
    while num>0:
        rem = num % 2
        num //= 2
        ans += (rem * pow)
        pow *= 10
    return ans
print(DecToBin(24)) 