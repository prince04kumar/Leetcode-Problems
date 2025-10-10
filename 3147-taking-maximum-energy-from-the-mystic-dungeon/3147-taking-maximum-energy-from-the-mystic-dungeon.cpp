class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<int>dp(n , INT_MIN);

        for(int i = n-1 ; i>=0 ;i--){
            dp[i] = (i+k < n) ? energy[i]+ dp[i+k] : energy[i];
        }
        sort(dp.begin() , dp.end());
        return dp[n-1];
    }
};