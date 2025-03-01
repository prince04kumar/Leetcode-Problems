class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s = 0;
        int e = nums.size()-1;
        int mid =  s + (e-s)/2;
        int ans = -1;
        while(s<=e){
           if(nums[mid]-mid <= 0) {
            ans = nums[mid];
            e = mid-1;

           }
           else if(nums[mid]-mid > 0 ){
            s = mid+1;
           }
           mid =  s + (e-s)/2;
       
    }
    return ans;
    }
};