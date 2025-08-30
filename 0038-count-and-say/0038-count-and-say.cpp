class Solution {
public:
    string rrle(string rle) {
       string s = "";
        int count = 1;
        for (int i = 1; i <= rle.size(); i++) {
            if (i < rle.size() && rle[i] == rle[i - 1]) {
                count++;
            } else {
                s += to_string(count);
                s += rle[i - 1];
                count = 1;
            }
        }
        return s;
    }
    string countAndSay(int n) {

        if (n == 1)
            return "1";

       vector<string> seq(n + 1);
        seq[1] = "1";

        for (int i = 2; i <= n; i++) {
            seq[i] = rrle(seq[i - 1]);
        }

        return seq[n];
    }
};