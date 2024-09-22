class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0; 
        int e = nums.size()-1;
        int mid = s + (e-s)/2;
        int ansIdx = -1;

        while (s<=e){
            mid = s + (e-s)/2;
            if (mid < nums.size() - 1 && nums[mid] < nums[mid+1]){
                s = mid + 1;
            }
            else{
                ansIdx = mid;
                e = mid-1;
            }
        }
        return ansIdx;

        
    }
};