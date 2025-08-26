class Solution {
public:
    int minsum(vector<vector<int>>& triangle , int row , int col , vector<vector<int>>&dp ){
        if(row == triangle.size() -1){
            return  dp[row][col] = triangle[row][col];
        }
        if(dp[row][col] != -1) return dp[row][col];
        //left
        int left = triangle[row][col] + minsum(triangle , row+1 , col ,  dp);

        // right 
        int right = triangle[row][col] + minsum(triangle , row +1 , col+1 ,dp);

        return dp[row][col] =  min(left , right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n =  triangle.size();
        vector<vector<int>>dp(n , vector<int>(n , -1));
       
  for (int j = 0; j < n; j++) {
            dp[n-1][j] = triangle[n-1][j];
        }

        for (int row = n-2; row >= 0; row--) {
            for (int col = 0; col <= row; col++) {
                int down = triangle[row][col] + dp[row+1][col];
                int diag = triangle[row][col] + dp[row+1][col+1];
                dp[row][col] = min(down, diag);
            }
        }

        return dp[0][0];
    }
};