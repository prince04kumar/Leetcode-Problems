class Solution {
public:
    bool helper(vector<int>& nums, int maxOperations , int mid){
        int op = 0 ;
        for(int i : nums){
            op+=(i-1)/mid;
            if(op>maxOperations) return false;
        }
        return true;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int size = nums.size();
        int s = 1 ;
        int e = *max_element(nums.begin() , nums.end());
        int mid = s + (e-s)/2;
        int ans = 0 ;
        while(s<=e){
            if(helper(nums, maxOperations , mid)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};