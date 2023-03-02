//https://leetcode.com/problems/squares-of-a-sorted-array/description/
//977. Squares of a Sorted Array

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> copy;
        copy = nums;
        for(int i=0; i<nums.size(); i++)
        {
            copy[i]=nums[i]*nums[i];
        }
        sort(copy.begin(),copy.end());
        return copy;
    }
};