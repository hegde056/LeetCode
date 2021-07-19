class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        if(nums.size()==1)
        {
            return false;
        }
        else
        {
            auto it = nums.begin();
            auto next_it = nums.begin() + 1 ; 
            
            for (;next_it!=nums.end();)
            {
                if(*it == *next_it)
                {
                    return true;
                }
                it++;
                next_it++;
            }
            return false;
        }
    }
};
