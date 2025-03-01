class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        if (a.empty()) return {};
        
        // Sort intervals based on the start time
        sort(a.begin(), a.end());

        vector<vector<int>> answer;
        answer.push_back(a[0]);

        for (int i = 1; i < a.size(); i++) {
            if (answer.back()[1] >= a[i][0]) {
               
                answer.back()[1] = max(answer.back()[1], a[i][1]);
            } else {
                
                answer.push_back(a[i]);
            }
        }
        return answer;
    }
};
