class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        if(size == 0 ) return 0;
        if(size == 1 ) return 1;
        int count = 1 ;
        int maxcount = INT_MIN;
        for(int i = 1; i< size; i++){
            if(nums[i]-nums[i-1] == 1) {
                    cout<<nums[i]<<" ";
                    count++;
                    maxcount = max(maxcount , count);
            }
            else if(nums[i]-nums[i-1] == 0){
                continue;
                }
            else{
                count=1;
            }
        }
        return max(maxcount,count);
    }
};