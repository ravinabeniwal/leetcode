class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<n;i++){
        if(i==k-1) return nums[i];
        }
        return -1;
    }
};