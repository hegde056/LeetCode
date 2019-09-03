class Solution(object):
    def findOcurrences(self, text, first, second):
        """
        :type text: str
        :type first: str
        :type second: str
        :rtype: List[str]
        """
        lst = text.split()
        out = list()
        for i in range(len(lst)-1):
            if lst[i]==first and i+2<len(lst):
                if lst[i+1] == second:
                    out.append(lst[i+2])
        return out
              