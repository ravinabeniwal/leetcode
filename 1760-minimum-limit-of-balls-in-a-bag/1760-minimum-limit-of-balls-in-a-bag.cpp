class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int n=nums.size();
        int low=1,high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            long long sum=0;
            for(int i=0;i<n;i++){
                int bags=(nums[i]+mid-1)/mid;
                sum+=bags-1; 
         }
         if(sum<=maxOperations)
         high=mid-1;
         else
         low=mid+1;
        }
        return low;
    }
};