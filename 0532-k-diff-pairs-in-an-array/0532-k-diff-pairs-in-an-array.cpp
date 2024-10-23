class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<pair<int,int>>ans;
        int i = 0 ;
        int j = i+1;
        while(j<n){
            
            int diff = nums[j] - nums[i];
            if(diff == k){
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            else if(diff<k){
                j++;
            }
            else{
                i++;
            }
            if(i==j)j++;

        }
        return ans.size();
    }
};