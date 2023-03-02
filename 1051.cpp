//1051. Height Checker
//https://leetcode.com/problems/height-checker/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> checker = heights;
        int count = 0;
        sort(checker.begin(),checker.end());
        for(int i=0; i<heights.size(); i++)
        {
            if(checker[i]!=heights[i])
            {
                count++;
            }
            // cout<<checker[i];
        }

        return count;
    }
};