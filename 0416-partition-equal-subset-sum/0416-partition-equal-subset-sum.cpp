class Solution {
public:
    bool solve(int start, vector<int>& nums, int targetsum , vector<vector<int>>&dp) {
        if (start == nums.size())
            return targetsum == 0;

        // include
        if(dp[start][targetsum] != -1) return dp[start][targetsum];
        bool include = false;
        if (nums[start] <= targetsum)
            include = solve(start + 1, nums, (targetsum - nums[start]) , dp);
        bool exclude = solve(start + 1, nums, targetsum , dp);

        return dp[start][targetsum] = include | exclude;
    }
    bool canPartition(vector<int>& nums) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        if (totalSum % 2 != 0)
            return false;
        totalSum = totalSum / 2;
        vector<vector<int>>dp(nums.size() + 1 , vector<int>(totalSum + 1, -1));

        return solve(0, nums, totalSum , dp);
    }
};