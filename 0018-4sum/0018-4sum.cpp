class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        int size = nums.size();
        if (size < 4) return result;

        for (int i = 0; i < size - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; 

            for (int j = i + 1; j < size - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; 

                int left = j + 1, right = size - 1;

                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                    if (sum == target) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});

                        
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;

                        left++;
                        right--;
                    } 
                    else if (sum < target) left++;
                    else right--;
                }
            }
        }
        return result;
    }
};
