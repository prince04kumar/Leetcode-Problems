class Solution {
public:
    bool iskrep(string &a, int k, char ch) {
        if (a.length() < k) return false;
        for (int j = a.length() - k; j < a.length(); j++) {
            if (a[j] != ch) {
                return false;
            }
        }
        return true;
    }

    string removeDuplicates(string s, int k) {
        string a;
        for (char c : s) {
            a.push_back(c);
            if (iskrep(a, k, c)) {
                for (int j = 0; j < k; j++) {
                    a.pop_back();
                }
            }
        }
        return a;
    }
};
