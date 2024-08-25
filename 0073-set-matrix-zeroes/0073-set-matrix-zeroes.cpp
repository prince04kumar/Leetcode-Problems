class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int row = matrix.size();
        int col = matrix[0].size();
        vector<pair<int, int>> zeroPositions;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0) {
                    zeroPositions.push_back({i, j});
                }
            }
        }
        for (const auto& pos : zeroPositions) {
            int zeroRow = pos.first;
            int zeroCol = pos.second;

            for (int j = 0; j < col; j++) {
                matrix[zeroRow][j] = 0;
            }

            for (int i = 0; i < row; i++) {
                matrix[i][zeroCol] = 0;
            }
        }
    }
};