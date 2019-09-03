class Solution(object):
    def fib(self, N):
        """
        :type N: int
        :rtype: int
        """
        #solution avoiding recursion
        if N<=1:
            return N
        a,b = 0,1
        for x in range(1,N):
            a,b = b,a+b
        return b