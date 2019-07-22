class Solution(object):
    def flipAndInvertImage(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        Y = []
        for i in A:
            i = i[::-1]
            for x in range(len(i)):
                i[x] = i[x] ^ 1 
            Y.append(i)
        return Y
