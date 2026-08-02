class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int>st1;
        queue<int>st2;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=0) st1.push(nums[i]);
            else st2.push(nums[i]);
        }
        
        vector<int >ans;
    while(!st1.empty() && !st2.empty()){
            ans.push_back(st1.front());
            st1.pop();
             ans.push_back(st2.front());
            st2.pop();

        }
        return ans;
    }
};