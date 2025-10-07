class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        set<int>ans;
        map<int, int>m;
        for(int i = 0 ; i< n; i++){
            m[nums[i]]++;
            if (m[nums[i]] > n/3 ) ans.insert(nums[i]);
        }
       vector<int>a(ans.begin() , ans.end());

        return a;
    }
};