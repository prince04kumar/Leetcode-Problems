class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.length();
        string a;
        bool ans = true;
        for (char c : s) {
            if (isalpha(c)||isdigit(c)) {
                a.push_back(c);
            }
        }
        for (char& c : a) {

            if (c >= 'a' && c <= 'z') {
                cout << c << ' ';
                continue;
            } else {
                c = c + ('a' - 'A');
                cout << c << ' ';
            }
        }
        int left = 0;
        int right = a.length() - 1;

        while (left < right) {
            if (a[left] != a[right]) {
                ans = false;
            }

            left++;
            right--;
        }
        return ans;
    }
};