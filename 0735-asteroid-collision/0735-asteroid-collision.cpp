class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            while(!ans.empty()&& ans.back()>0 && asteroids[i]<0){
                if(ans.back()<-asteroids[i])
                ans.pop_back();
                else if(ans.back()==-asteroids[i]){
                ans.pop_back();
                asteroids[i]=0;
            }
         else
         asteroids[i]=0;
  }
  if(asteroids[i]!=0)
  ans.push_back(asteroids[i]);
        }

        return ans;
    }
};