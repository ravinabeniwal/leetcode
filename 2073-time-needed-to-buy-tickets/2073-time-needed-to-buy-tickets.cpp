class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size();
        queue<int>q;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        int count=0, i=0;
        while(!q.empty()){
            int person=q.front();
            q.pop();
            tickets[person]--;
            count++;
            if(k==person && tickets[person]==0){
                break;
                
            }

        if(tickets[person]>0){
                q.push(person);
                
            }
        }
        return count;
    }
};