//1464. Maximum Product of Two Elements in an Array

//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq(nums.begin(),nums.end());
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        return (a-1)*(b-1);
    }
};