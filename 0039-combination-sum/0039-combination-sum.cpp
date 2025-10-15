class Solution {
public:
    void combineSum(int node, vector<int>& candidates, int target, int sum,
                    vector<vector<int>>& answer, vector<int>& temp) {
        if (node >= candidates.size())
            return;
        if (sum == target) {
            answer.push_back(temp);
            return;
        }
        if (sum > target) {
            return;
        };

        sum += candidates[node];
        temp.push_back(candidates[node]);

        // include
        combineSum(node, candidates, target, sum, answer, temp);
        temp.pop_back();
        sum -= candidates[node];
        combineSum(node + 1, candidates, target, sum, answer, temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> answer;
        vector<int> temp;
        combineSum(0, candidates, target, 0, answer, temp);
        return answer;
    }
};