class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int dup=-1, miss=-1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                dup=nums[i];
                break;
            }
        }
        for(int i=1;i<=n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[j]==i)
                count++;
            }
            if(count==0)
            miss=i;
        }
        return {dup,miss};
    }
};