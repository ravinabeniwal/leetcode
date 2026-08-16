class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int row=matrix.size() ;
       int col=matrix[0].size();
       int top=0;
       int bottom=row-1;
       int left=0;
       int right=col-1;
       vector<int>ans;
       while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int j=top;j<=bottom;j++){
            ans.push_back(matrix[j][right]);
        }
        right--;
        if(top<=bottom){
        for(int k=right;k>=left;k--){
            ans.push_back(matrix[bottom][k]);
        }
        bottom--;}
        if(left<=right){
          for(int m=bottom;m>=top;m--){
           ans.push_back(matrix[m][left]);
          }
          left++;
        }
       }
       return ans;
    }
};