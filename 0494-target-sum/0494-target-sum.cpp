class Solution {
public:
    void Targetsum(int start , vector<int>&nums , int target , int &count){
        if(start == nums.size()){
           if(target == 0) count++;
           return;
        }
        
            //take with positive sign
            target -= nums[start];
            Targetsum(start+1 , nums, target , count);

            target += nums[start];
            target += nums[start];
             //take with -ve sign
            Targetsum(start+1 , nums, target , count);


           
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int count = 0;
        Targetsum(0 , nums, target , count);
        return count ;
    }
};