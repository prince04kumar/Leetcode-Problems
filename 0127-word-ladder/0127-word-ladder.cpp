class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>st(wordList.begin(), wordList.end());
        queue<pair<string , int>>q;
        q.push({beginWord, 1});
        st.erase(beginWord);
        while(!q.empty()){
            string curr = q.front().first;
            int step = q.front().second;
            q.pop();
            if(curr == endWord) return step;

            for(int i = 0 ; i< curr.size() ; i++){
                char curlet = curr[i];
                for(char j = 'a' ; j<='z' ; j++){
                    curr[i] = j;
                    if(st.find(curr) != st.end()){
                        st.erase(curr);
                        q.push({curr , step+1});
                    }
                }
                curr[i] = curlet;
            }

        }
        return 0;
    }
};