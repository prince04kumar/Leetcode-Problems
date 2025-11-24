class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n = nums.size();
        vector<bool>ans(n , false);
        long long curr = 0;
        for(int i = 0; i< n ; i++){
            if(nums[i] == 0){
                curr = (curr*2)%5;
            }
            else if(nums[i] == 1){
                curr = (curr*2 + 1)%5;
            }
            if(curr % 5 == 0 || curr == 0){
                ans[i] = true;
            

            }
        }
    return ans;
    }
};