class Solution(object):
    def sortArrayByParity(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        ind = 0
        for i in range(len(A)):
            if A[ind]%2 :
                A.append(A.pop(ind))
            else:
                ind+=1
        return(A)
