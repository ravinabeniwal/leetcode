class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int n=aliceSizes.size();
        int m=bobSizes.size();
        int sum1=0, sum2=0;
        for(int i=0;i<n;i++){
            sum1+=aliceSizes[i];}
            for(int j=0;j<m;j++){
                sum2+=bobSizes[j];}
                
        int diff=(sum1-sum2)/2;
        for(int x:aliceSizes){
            for(int y:bobSizes){
                if((x-y)==diff)
                return {x,y};
            }
        }
        return {-1,-1};
    }
};