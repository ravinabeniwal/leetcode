class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>ts;
       for(int i=0;i<s.size();i++) {
           if(s[i]!='#')
            st.push(s[i]);
            else if(!st.empty())
            st.pop();}
        for(int j=0;j<t.size();j++){
            if(t[j]!='#')
            ts.push(t[j]);
            else if(!ts.empty())
            ts.pop();
       }
       if(st==ts) return true;
       else  return false;
    }
};