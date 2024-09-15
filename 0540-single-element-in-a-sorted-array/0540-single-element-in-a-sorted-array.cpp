class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        if (nums.size()==1){
            ans = nums[0];
        }
        else if(nums[0]!=nums[1]){
            ans = nums[0];
        }
        else {
            for (int i = 1; i < nums.size(); i++) {
            if ((i + 1) <= nums.size() && nums[i] != nums[i + 1] &&
                nums[i] != nums[i - 1]) {
                ans = nums[i];
                break;
            }
            }
        }
        return ans;
    }
};