class Solution {
public:
    string finalString(string s) {
        string t="";
      for(int i=0;i<s.size();i++){
        if(s[i]!='i')
        t+=s[i];
        else
        reverse(t.begin(),t.end());

      }
      return t;
    }
};