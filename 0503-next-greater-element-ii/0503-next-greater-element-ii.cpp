class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int i=0;i<2*n;i++){
            int ind=i%n;
            while(!st.empty() &&  nums[st.top()]<nums[ind] ){
                ans[st.top()]=nums[ind];
                st.pop();
            }
            if(i<n)
            st.push(ind);
        }
        return ans;
    }
};