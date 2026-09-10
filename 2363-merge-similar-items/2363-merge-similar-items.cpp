class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<int>ans(1001,0);
        for(int i=0;i<items1.size();i++){
            ans[items1[i][0]]+=items1[i][1];
        }
         for(int i=0;i<items2.size();i++){
            ans[items2[i][0]]+=items2[i][1];
        }
        vector<vector<int>> res;
        for(int i=1;i<=1000;i++){
            if(ans[i]!=0){
            res.push_back({i,ans[i]});
        }}
        return res;
    }
};