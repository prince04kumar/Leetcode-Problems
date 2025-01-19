class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
          int size = nums.size();
        if (size < 2) return 0; 
        
        int max_diff = INT_MIN;

        for (int i = 1; i < size; i++) {
            int diff = abs(nums[i] - nums[i - 1]);
            max_diff = max(max_diff, diff);
        }

        int last_diff = abs(nums[0] - nums[size - 1]);
        max_diff = max(max_diff, last_diff);

        return max_diff;

    }
};