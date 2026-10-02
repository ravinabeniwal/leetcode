class Solution {
public:
    int maximumCandies(vector<int>& piles, long long h) {
           int n=piles.size();
       int low=1, high=*max_element(piles.begin(),piles.end());
       while(low<=high){
        int mid=low+(high-low)/2;
        long long sum=0;
        for(int i=0;i<n;i++){
           sum+=piles[i]/mid;
        }
        if(sum>=h)
        low=mid+1;
        else
      high=mid-1;

       } 
       return high;
    }
};