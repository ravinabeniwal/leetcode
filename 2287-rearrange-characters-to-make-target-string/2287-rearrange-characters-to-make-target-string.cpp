class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int  freqs[26]={0};
        int freqt[26]={0};
        for(char ch:s)
        freqs[ch-'a']++;
        for(char ch:target)
        freqt[ch-'a']++;
        int ans=INT_MAX;
        for(int i=0;i<26;i++){
      if(freqt[i]>0){
    ans=min(ans,freqs[i]/freqt[i]);
 }
        }
        return ans;
    }
};