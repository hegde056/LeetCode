class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        for x in xrange(len(nums)):
            p = nums.pop()
            if p in nums:
                nums.pop() 
            else:
                return p