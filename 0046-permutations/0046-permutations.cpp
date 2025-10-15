class Solution {
public:
    void premutations(int node , vector<int>&nums , vector<vector<int>>&answer , vector<int>&temp ,unordered_map<int, int>&ma){
        if(node == nums.size()){
            answer.push_back(temp);
            return;
        }
        for(int i = 0 ; i< nums.size(); i++){
            if(ma.find(nums[i]) == ma.end()){
                ma[nums[i]]++;
            temp.push_back(nums[i]);
            premutations(node+1 , nums , answer , temp , ma);
            }
            else continue;
            
           temp.pop_back();
           ma.erase(nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>>answer;
       vector<int>temp;
       unordered_map<int, int>ma;
       premutations(0 , nums, answer , temp, ma); 
       return answer;
    }
};