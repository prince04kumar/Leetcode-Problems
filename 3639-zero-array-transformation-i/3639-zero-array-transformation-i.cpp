class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>diff(nums.size()+1 , 0);
        for(int i = 0; i< queries.size(); i++){
            diff[queries[i][0]]++;
            diff[queries[i][1]+1]--;
        }
        bool ans = true;
        for(int j = 0 ; j < nums.size() ; j++){
               //prefix sum 
               if(j>0){
               diff[j]+=diff[j-1];
               if(diff[j] < nums[j]) {
                ans =false;
                break;
               }
               }
               if(j == 0 ){
                if(diff[j] < nums[j]){
                ans =false;
               }
        }
    }
    return ans;
    }
};