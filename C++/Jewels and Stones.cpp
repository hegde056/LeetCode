class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        
        for(int iter = 0; iter <J.size();iter++)
        {
            count += std::count(S.begin(),S.end(),J[iter]);
        }
        
       return count; 
    }
};
