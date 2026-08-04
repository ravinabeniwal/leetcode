class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>arr;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++)
            arr.push_back(grid[i][j]);
        }
         int n = arr.size();
        sort(arr.begin(), arr.end());

        vector<int> ans;
        int r=0;
        for(int i = 1; i < n; i++) {
            if(arr[i] == arr[i-1]) {
                r+=arr[i];
                ans.push_back(arr[i]);
                break;
            }
        }

    long long sum1=0;
    long long  sum2=0;
        for(int i = 0; i <n; i++) {
           sum1+=arr[i];}
            for(int i = 1; i <= n; i++) {
           sum2+=i;}
           int diff=sum2-(sum1-r);
           ans.push_back(diff);
            
        

        return ans;
    }
};