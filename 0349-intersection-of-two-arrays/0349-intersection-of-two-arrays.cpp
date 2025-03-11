class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin() , nums1.end()); 
        sort(nums2.begin() , nums2.end()); 
        int i = 0 ;
        int j = 0 ;
        vector<int>ansf;
        unordered_set<int>ans;
        while (i<nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]) i++;
            if(i<nums1.size() && j < nums2.size() && nums1[i] > nums2[j]) j++;
            if(i<nums1.size() && j < nums2.size() && nums1[i] == nums2[j]  ) {
                ans.insert(nums1[i]);
                i++;
                j++;
            }
        }
        ansf.assign(ans.begin(), ans.end());
        return ansf;
       
    }
};