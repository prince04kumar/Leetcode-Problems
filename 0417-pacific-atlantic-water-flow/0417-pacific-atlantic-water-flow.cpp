class Solution {
public:
    void dfs(int x, int y, vector<vector<int>>& heights, vector<vector<int>>& vis) {
        int n = heights.size(), m = heights[0].size();
        vis[x][y] = 1;
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 && ny >= 0 && nx < n && ny < m && !vis[nx][ny] && heights[nx][ny] >= heights[x][y]) {
                dfs(nx, ny, heights, vis);
            }
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size(), m = heights[0].size();
        vector<vector<int>> pacific(n, vector<int>(m, 0)), atlantic(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            dfs(i, 0, heights, pacific);
            dfs(i, m - 1, heights, atlantic);
        }
        for (int j = 0; j < m; j++) {
            dfs(0, j, heights, pacific);
            dfs(n - 1, j, heights, atlantic);
        }
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (pacific[i][j] && atlantic[i][j]) ans.push_back({i, j});
            }
        }
        return ans;
    }
};
