class Solution {
public:
   vector<int>coded(string str){
        unordered_map<char,int>map;
        int count = 1;
        vector<int>ans;

        for(char c : str){
            if(map.find(c) == map.end()){ // this is checking that if c is in the map;
             map[c] = count;
             count++;
            } 
        }
       for(char c : str){
        int val = map[c];
          ans.push_back(map[c]);
       }

        return ans;   
        
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;

        for(int i = 0 ; i< words.size(); i++){
            if(coded(words[i])==coded(pattern)){
                ans.push_back(words[i]);
            }
        }
        return ans;

    }
};