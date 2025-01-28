class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int , int>map;
      

        for (int i = 0 ; i< answers.size(); i++){
            map[answers[i]]++;
        }
        int count = 0;
        for (auto it = map.begin(); it != map.end();it++ ){
             int answer = it->first;
             int frequency = it->second;
                int group = ceil((double)frequency / (answer+1) ); 
                int groupcount = (it->first +1)*group;
                
                count+=groupcount;
        }
    return count;
    }
};