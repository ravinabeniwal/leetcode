class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int mixi=0;
        int sum=0;
          
       for(int i=0;i<k;i++){
        sum+=nums[i]; }
        mixi=sum;
        for(int i=k;i<nums.size();i++){
       sum+=nums[i]-nums[i-k];
       mixi=max(mixi,sum);
    }
    return (double)mixi/k;
    }
};