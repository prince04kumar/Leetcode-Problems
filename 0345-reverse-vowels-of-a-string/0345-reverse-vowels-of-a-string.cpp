class Solution {
public:
    string reverseVowels(string s) {
        vector<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                st.push_back(s[i]);
                s[i] = '+';
            }
        }
        int idx = 0;
        reverse(st.begin(), st.end());
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '+') {
                s[i] = st[idx];
                idx++;
            }
        }
        return s;
    }
};