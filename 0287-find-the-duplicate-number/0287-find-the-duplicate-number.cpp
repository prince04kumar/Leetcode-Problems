class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i = 0;
        int j = i+1;

        while(i<j && j<nums.size()){
                if(nums[j]-nums[i]==0) return nums[i];
                else{
                    i++;
                    j++;
                }

        }
        return -1;
    }
};