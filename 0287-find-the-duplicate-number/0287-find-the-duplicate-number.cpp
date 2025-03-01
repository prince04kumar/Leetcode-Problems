class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>map;

        for(int i = 0 ;i< nums.size() ; i++){
                map[nums[i]]++;
        }

        for(auto &pair : map){
            if(pair.second > 1) { return pair.first; }
        }
        return -1;
    }
};