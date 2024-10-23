class Solution {
public:
    int binarySearch(vector<int>&v ,int start , int x){
        int s= start;
        int e = v.size()-1;
        int m = s + (e-s)/2;
        while(s<=e){
            if(x==v[m]){
                return m;
            }
            else if (x>v[m]){
                s = m +1;
            }
            else{
                e = m-1;
            }
            m = s + (e-s)/2;
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());
        set<pair<int,int>>s;
        int n=nums.size();
        for(int i =0 ; i< n; i++){
           
            if(binarySearch(nums , i+1 , nums[i]+k) != -1){
                s.insert({nums[i] , nums[i]+k});
            }


        }
        return s.size();
    }
};