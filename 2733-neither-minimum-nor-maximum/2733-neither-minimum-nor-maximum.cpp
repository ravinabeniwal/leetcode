class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n>2) return nums[1];
       return -1; 
    }
};