class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int count=0;
        for(int i=0;i<=s.size()-k;i++){
            string sub=s.substr(i,k);
            int x=stoi(sub);
            if(x!=0 && num%x==0)
            count++;

        }
        return count;
    }
};