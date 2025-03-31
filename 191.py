# 191. Number of 1 Bits

class Solution(object):
    def hammingWeight(self, n):
        num=int(n)
        c=0
        while num!=0:
            r=num%2
            if r==1:
                c+=1
            num//=2
        return c