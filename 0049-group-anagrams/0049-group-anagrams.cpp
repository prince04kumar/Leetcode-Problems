class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>map;
        for(string s : strs){
            string targetst = s;
            sort(targetst.begin(), targetst.end());

            map[targetst].push_back(s);
        }

        vector<vector<string>>ans;
        for(auto& pair : map){
            ans.push_back(pair.second);
        }
        return ans;
        
        
            }
};