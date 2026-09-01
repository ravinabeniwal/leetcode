class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int n=costs.size();
        int count=0;
        for(int i=0;i<n;i++){
            int sum=costs[i];
             if (sum <= coins)
                count = max(count, 1);
            for(int j=i+1;j<n;j++){
                sum+=costs[j];
                if(sum<=coins)
                count=max(count,j-i+1);
                else 
                break;
            }
        }
        return count;
    }
};