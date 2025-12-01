class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
          unordered_map<int , int>mp1;
        set<int>ans;
     
        for(int &c: nums2 ) mp1[c]++;
        for(int &e : nums1){
            if(mp1.find(e) != mp1.end()){
                    ans.insert(e);
                    mp1[e]--;
                    if(mp1[e] == 0 ) mp1.erase(e);
                 
            } 

        } 
        vector<int>st(ans.begin() , ans.end());
        return  st;
  
    }
};