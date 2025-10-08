class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        sort(potions.begin() , potions.end());
        priority_queue<pair<int, int>>q;
        for(int i =0 ; i< n ; i++ ){
            q.push({spells[i] , i});
        }
        vector<int> ans(n , 0 );
        int s = 0 ;
        while(s<potions.size() && !q.empty()){
            long long pro = (long long)q.top().first* (long long )potions[s];
            if( pro >= success){
                ans[q.top().second] = potions.size() - s ;
                q.pop();
            }
            else{
                 s++;
            }

           
        }

        return ans;
    }
};