class Solution {
public:
bool isvarb(char c){
    return c=='a'|| c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
}
    string reverseVowels(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            if(!isvarb(s[i])) i++;
            else if(!isvarb(s[j])) j--;
           else{
            swap(s[i],s[j]);
            i++; j--;      
             } }
             return s;
    }
};