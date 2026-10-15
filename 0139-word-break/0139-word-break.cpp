class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        vector<bool>dp(n+1,false);
        dp[0]=true;
        for(int i=0;i<=n;i++){
        for(string x:wordDict){
            int len=x.size();
                if(i>=len && dp[i-len] && s.substr(i-len,len)==x){
                dp[i]=true;
                break;
                }
            }
        }
        return dp[n];
    }
};