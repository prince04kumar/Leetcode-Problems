class Solution {
public:
    int solve (vector<int>&values , int i , int j , vector<vector<int>>&v){
        if( j- i < 2) return 0;
        int result = INT_MAX;
        if(v[i][j] != -1 ) return v[i][j];
        for(int k = i+1; k< j ; k++){
            int wt = values[i] * values[k] * values[j] + solve(values , i , k  ,v) + solve(values , k , j ,v);
                result = min(result , wt);
        }
        return v[i][j] =  result;
    }
    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        vector<vector<int>>v(n , vector<int>(n , -1));
        return solve(values , 0 , n-1 , v);
    }
};