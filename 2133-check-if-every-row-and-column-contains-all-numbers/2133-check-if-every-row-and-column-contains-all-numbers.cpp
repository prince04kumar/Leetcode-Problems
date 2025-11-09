class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {

        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            unordered_map<int, int> count;
            unordered_map<int, int> count2;

            for (int j = 0; j < n; j++) {
                int num = matrix[i][j];
                if (n - num >= n || n - num < 0)
                    return false;
                else {
                    count[matrix[i][j]]++;
                    count2[matrix[j][i]]++;
                }
            }
            if (count.size() != n || count2.size() != n)
                return false;
        }
        return true;
    }
};