class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> wealth; 
        for(auto i : accounts)
        {
            wealth.push_back(std::accumulate(i.begin(),i.end(),0));
        }
        
        return *std::max_element(wealth.begin(),wealth.end());   
    }
};

/*
Runtime: 4 ms, faster than 93.52% of C++ online submissions for Richest Customer Wealth.
Memory Usage: 8 MB, less than 8.18% of C++ online submissions for Richest Customer Wealth.
*/
