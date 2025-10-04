class Solution {
public:
    typedef pair<int, pair<int, int>> PP;
    vector<vector<int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    int trapRainWater(vector<vector<int>>& heightMap) {
        int n = heightMap[0].size();
        int m = heightMap.size();
        priority_queue<PP, vector<PP>, greater<>> boundaryCells;
        vector<vector<bool>>visited(m, vector<bool>(n, false));

        // left most col and right most col into heap

        for (int row = 0; row < m; row++) {
            for (int col : {0, n - 1}) {
                boundaryCells.push({heightMap[row][col], {row, col}});
                visited[row][col] = true;
            }
        }
        // topmost row and bottom most row
        for (int col = 0; col < n; col++) {
            for (int row : {0, m - 1}) {
                boundaryCells.push({heightMap[row][col], {row, col}});
                visited[row][col] = true;
            }
        }

        int totoalWater = 0;
        while (!boundaryCells.empty()) {
            PP p= boundaryCells.top();
            boundaryCells.pop();

            int height = p.first;
            int i = p.second.first;
            int j = p.second.second;

            for (vector<int>& dir : directions) {
                int newi = i + dir[0];
                int newj = j + dir[1];

                if (newi >= 0 && newj >= 0 && newi < m && newj < n &&
                    !visited[newi][newj]) {
                    totoalWater += max(height - heightMap[newi][newj], 0);

                    boundaryCells.push(
                        {max(height, heightMap[newi][newj]), {newi, newj}});
                    
                    visited[newi][newj] = true;
                }
            }
        }
        return totoalWater;
    }
};