class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        vector<int> finalAns;
        int firstInd = -1;
        int secondInd = -1;
        while (s <= e) {
            if (nums[mid] == target) {
                firstInd = mid;
                s = mid + 1;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }

        s = 0;
        e = n - 1;
        mid = s + (e - s) / 2;

        while (s <= e) {
            if (nums[mid] == target) {
                secondInd = mid;
                e = mid - 1;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        finalAns.push_back(secondInd);
        finalAns.push_back(firstInd);
         return finalAns;
    }

   
};