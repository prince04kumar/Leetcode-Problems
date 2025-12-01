class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int prefix = 0;
        unordered_map<int, int>mp;
        mp[0] = 1;
        int count = 0;
        for(int i = 0; i< n ; i++){
            prefix = (prefix+nums[i] + k)%k;
            count += mp[prefix];
            mp[prefix]++;
            
        }
        return count;
    }
};