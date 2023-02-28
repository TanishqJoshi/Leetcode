//1365. How Many Numbers Are Smaller Than the Current Number

//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ouch;
        for(int i=0; i<nums.size(); i++)
        {
            int count = 0;
            for(int j=0;j<nums.size();j++)
            {
                if(i==j)
                {

                }
                else
                if(nums[i]>nums[j])
                {
                    count++;
                }
            }
            ouch.push_back(count);
        }
    return ouch;
    }
};