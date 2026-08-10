class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int n=words.size();
        int count=0;
        for(int x=0;x<n;x++){
            string temp=chars;
            bool possible=true;
            for(char ch:words[x]){
            bool found=false;
            for(int i=0;i<temp.size();i++){
                if(ch==temp[i]) {
                    found=true;
                    temp[i]='#';
                    break;
                }
            }
            if(!found) {
                possible=false;
                break;
            }

            }
            if(possible)
            count+=words[x].size();

        }
        return count;
    }
};