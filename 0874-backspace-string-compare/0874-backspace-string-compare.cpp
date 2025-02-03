class Solution {
public:
    string isstack(string s) {
        stack<char> stk;
        for (int i = 0; i < s.size(); i++) {
            if (!stk.empty() && s[i] == '#') {
                stk.pop();
            }
             else if (stk.empty() && s[i] == '#') {
                continue;
            }
            else{
            stk.push(s[i]);
            }
        }
        string result = "";
        while (!stk.empty()) {
            result = stk.top() + result;
            cout<<stk.top()<<endl;
            stk.pop();
        }

        return result;
    }
    bool backspaceCompare(string s, string t) {
        return isstack(s) == isstack(t);
    }
};