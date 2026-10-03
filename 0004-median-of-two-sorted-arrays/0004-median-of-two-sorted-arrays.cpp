class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            ans.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++){
            ans.push_back(b[i]);
        }
        int n=ans.size();
        sort(ans.begin(),ans.end());
        
        if(n%2!=0)
        return ans[n/2];
        else
        return (ans[n/2-1]+ans[n/2])/2.0;
    
    }
};