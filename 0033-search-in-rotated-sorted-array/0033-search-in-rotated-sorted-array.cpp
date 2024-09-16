class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        int ans = -1;
        while (s <= e) {
            if (nums[mid] == target) {
                ans = mid;
            }
            if (nums[mid] >= nums[s]) {
                if (target >= nums[s] && target <= nums[mid]) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }

            } else {
                if (nums[mid] <= target && target <= nums[e]) {
                    s = mid + 1;
                } else {
                    e = mid - 1;
                }
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
};