class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n<3) return 0;
       // if(n == 2) 
        int j = n-1 ;
        while(j>=2){
            int   i = j-1 , k = i-1;
            if(nums[i] + nums[k] > nums[j]){
                return nums[i] + nums[k] + nums[j];
            }
            else{
                j--;
            }


           
        }
        return 0;
    }
};