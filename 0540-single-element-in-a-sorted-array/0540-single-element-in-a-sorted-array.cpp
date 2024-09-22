class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        if (nums[0] != nums[1])
            return nums[0];
        if (nums[n - 1] != nums[n - 2])
            return nums[n - 1];

        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        while (s <= e) {
            if (mid - 1 > 0 && mid + 1 < n && nums[mid] - nums[mid - 1] > 0 &&
                nums[mid + 1] - nums[mid] > 0)
                return nums[mid];
            if (mid - 1 > 0 && mid + 1 < n &&(mid % 2 == 0 && nums[mid] == nums[mid + 1]) ||
                mid % 2 == 1 && nums[mid] == nums[mid - 1]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return 0;
    }
};