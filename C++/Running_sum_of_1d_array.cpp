class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ret ;
        int sum = 0;
        for(auto i : nums)
        {
            sum+=i;
            ret.push_back(sum);
        }
        
        return ret;
    }
};
/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Running Sum of 1d Array.
Memory Usage: 8.5 MB, less than 34.57% of C++ online submissions for Running Sum of 1d Array.
*/
