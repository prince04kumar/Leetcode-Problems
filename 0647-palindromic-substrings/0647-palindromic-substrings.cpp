class Solution {
public:
    int expandAroundCen(string &s , int i , int j){
        int count = 0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int finalAnswer = 0;
        for (int center = 0; center < s.length(); center++) {
            int i = center;
            int j = center;
            // odd palindrom
            int oddPalSubStr = expandAroundCen(s, i, j);
            // even palindrom;
            int evenPalSubStr = expandAroundCen(s, i, j+1);
            finalAnswer = finalAnswer + oddPalSubStr + evenPalSubStr;
        }
        return finalAnswer;
    }
};