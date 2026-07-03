class Solution {
public:
    int hammingWeight(int n) {
        
        int count=0;
     while(n!=0){
         count+=(n&1); // first ceck last bit
         n>>=1; // shift to right side;
     }
        return count;
    }
};