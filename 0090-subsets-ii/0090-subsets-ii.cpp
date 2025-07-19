class Solution {
public:
   void subset(vector<int>& nums , int idx , set<vector<int>>&answer , vector<int>&ans){
        if(idx == nums.size()){
                answer.insert(ans);
                return;
        }
        ans.push_back(nums[idx]);
        subset(nums , idx+1 , answer , ans );
        ans.pop_back();
        subset(nums , idx+1 , answer , ans );

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            set<vector<int>>answer;
            vector<int>ans;
            subset(nums , 0 , answer , ans);

            return vector<vector<int>>(answer.begin(), answer.end());
    }
};