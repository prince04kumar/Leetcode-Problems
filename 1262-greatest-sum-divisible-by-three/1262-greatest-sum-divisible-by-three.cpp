class Solution {
public:
    // int msum(vector<int>&nums , int sum , int ind , vector<int>&dp){
    //     int n = nums.size();
    //     //write basecase
    //     if(ind == n-1){
    //         if((sum+nums[ind]) % 3 == 0)return dp[ind] = sum+nums[ind];  
    //         else return dp[ind] =  sum;
    //     }
    //    if(dp[ind] != -1) return dp[ind];
    //     int include = msum(nums, sum+nums[ind] , ind+1 , dp);

    //     int exclude = msum(nums, sum , ind+1 , dp);

    //     if(include % 3 == 0 && exclude % 3 == 0){
    //         return dp[ind] =  max(include , exclude);

    //     }
    //     else{
    //         if(include % 3 == 0) return include;
    //         else return dp[ind] =  exclude;
    //     }
    // }
    int maxSumDivThree(vector<int>& nums) {
        int n = nums.size();
        // vector<int>dp(n , -1);
        // int sum = 0 ;
        // int maxsum = msum(nums , sum , 0 , dp);
        // return maxsum;
        sort(nums.begin() , nums.end());
        int sum = accumulate(nums.begin() , nums.end() , 0);
        for(int i = 0 ; i< n ; i++){
            sum -= nums[i];
            if(sum%3 == 0) {
                return sum;
            }
            else{
                sum += nums[i];
            }
        }
        return sum;
    }
};