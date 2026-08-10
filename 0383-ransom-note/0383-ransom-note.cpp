class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size(),m=magazine.size();
        for(char ch:ransomNote){
        bool found=false;
                for(int i=0;i<m;i++){
                    if(ch==magazine[i]){
                        found=true;
                        magazine[i]='#';
                        break;
                    }
                }
            
            if(!found) return false;
        }
        return true;
    }
};