class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int i = s.size() - 2;

        while (i >= 0 && s[i] >= s[i + 1]) i--;

        if (i < 0) return -1; 

        int j = s.size() - 1;
        while (j > i && s[j] <= s[i]) j--;

        swap(s[i], s[j]);
        sort(s.begin() + i + 1, s.end());

        long long num = 0;
        for (char c : s) {
            num = num * 10 + (c - '0');
            if (num > INT_MAX) return -1; 
        }

        return (int)num;
    }
};
