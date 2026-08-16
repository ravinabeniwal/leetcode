class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        stack<int>even;
        stack<int>odd;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]>0) even.push(nums[i]);
            else odd.push(nums[i]);
        }
        while(!even.empty() && !odd.empty()){
            ans.push_back(odd.top());
            odd.pop();
            ans.push_back(even.top());
            even.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};