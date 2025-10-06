class Solution {
    bool dfs(int t, int i , int j , vector<vector<int>>& grid ,vector<vector<int>>&visited){
        int n = grid.size();
        if(i < 0 || i>= n || j < 0 || j >=n || visited[i][j] == 1 || grid[i][j] > t){
            return false;
        }
        visited[i][j] =  1;

        if(i == n-1 && j == n-1){
            return true;
        }
        int dx[] = { -1 ,1 ,0 ,0};
        int dy[] = { 0, 0 , -1 ,1 };
        for(int d = 0 ; d < 4 ; d++){
            int ni = i + dx[d];
            int nj = j + dy[d];
            
            if(dfs(t , ni , nj , grid , visited)){
                return true;
            }
        }
        return false;
    }



public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();

        int start = grid[0][0] , end = n*n -1;
        int result = 0;

        while(start <= end){
            int mid = start + (end - start)/2;
            vector<vector<int>>visited(n , vector<int> (n , 0));
            if(dfs(mid , 0 , 0 , grid , visited)){
                result = mid;
                end = mid -1;
            }
            else{
                start = mid+1;
            }
        }
        return result;
    }
};