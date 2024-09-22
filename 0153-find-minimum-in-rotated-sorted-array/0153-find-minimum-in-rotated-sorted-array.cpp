class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s= 0;
        int e = n-1;
        int m = s + (e-s)/2;
        int ans = -1;
          if (nums[s] <= nums[e]) {
        return nums[s];
    }
        while(s<=e){
            if(nums[m]>nums[m+1]){
               return nums[m+1];
            }
            else if(nums[m]<nums[m-1]){
              return nums[m];
            }
            else if (nums[m] > nums[s]){
                s = m+1;
            }
            else{
                 e = m-1;
            }
            m = s+ (e-s)/2;
        }
        return ans;
    }
};