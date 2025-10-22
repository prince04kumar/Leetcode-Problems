class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(), wordList.end());
        if (!st.count(endWord)) return {};
        unordered_map<string, vector<string>> parents;
        unordered_map<string, int> level;
        queue<string> q;
        q.push(beginWord);
        level[beginWord] = 0;
        int L = beginWord.size();
        while (!q.empty()) {
            string word = q.front();
            q.pop();
            for (int i = 0; i < L; i++) {
                string temp = word;
                for (char c = 'a'; c <= 'z'; c++) {
                    temp[i] = c;
                    if (!st.count(temp)) continue;
                    if (!level.count(temp)) {
                        level[temp] = level[word] + 1;
                        q.push(temp);
                    }
                    if (level[temp] == level[word] + 1)
                        parents[temp].push_back(word);
                }
            }
        }
        vector<vector<string>> ans;
        vector<string> path = {endWord};
        function<void(string)> dfs = [&](string word) {
            if (word == beginWord) {
                reverse(path.begin(), path.end());
                ans.push_back(path);
                reverse(path.begin(), path.end());
                return;
            }
            for (auto& p : parents[word]) {
                path.push_back(p);
                dfs(p);
                path.pop_back();
            }
        };
        if (level.count(endWord)) dfs(endWord);
        return ans;
    }
};
