class Solution {
public:
void pare( int left, int right,int n, vector<string> &ans, string &temp ){
    if(left+right == 2*n){
        ans.push_back(temp);
        return ;
    }
    if(left<n){
        temp.push_back('(');
        pare(left+1,right,n,ans,temp);
        temp.pop_back();
    }
    
    if(right<left){
        temp.push_back(')');
         pare(left,right+1,n,ans,temp);
          temp.pop_back();
    }
}
    vector<string> generateParenthesis(int n) { 
        vector<string> ans;
        string temp;
        pare( 0,0,n,ans,temp);
        return ans;
    }
};