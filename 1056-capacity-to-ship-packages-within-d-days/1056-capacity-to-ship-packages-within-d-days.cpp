class Solution {
public:
     bool isPossibleSol(vector<int>& nums , int k , int posSol) {
            int pagesol = 0;
            int stu = 1;
            int size = nums.size();

            for (int i = 0; i < size; i++) {
                if (nums[i] > posSol) {
                    return false;
                } else if ((pagesol + nums[i]) > posSol) {
                    stu++;
                    pagesol = nums[i];
                    if (stu > k)
                        return false;

                } else {
                    pagesol += nums[i];
                }
            }
            return true;
        }


    int shipWithinDays(vector<int>& nums, int k) {
        int size = nums.size();
        int s = 0;
        int end = accumulate(nums.begin(), nums.end(), 0);
        int ans = -1;
        int mid = s + (end - s) / 2;

        if (k > size)
            return -1;

        while (s <= end) {
            if (isPossibleSol(nums , k , mid)) {
                end = mid - 1;
                ans = mid;
            } else {
                s = mid + 1;
            }
            mid = s + (end - s) / 2;
        }
        return ans;
    }
};