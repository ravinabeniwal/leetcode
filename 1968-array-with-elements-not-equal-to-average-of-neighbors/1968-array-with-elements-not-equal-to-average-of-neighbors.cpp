class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i+1<n;i+=2){
            // int avg=(nums[i-1]+nums[i+1]);
            // if(2*nums[i]==avg)
            swap(nums[i],nums[i+1]);
                    }
                    return nums;
    }
};