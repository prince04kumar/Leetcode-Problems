class Solution {
public:
    bool hasSameDigits(string s) {
        if(s.size() == 2 && s[0] == s[1]) return true;
        if(s.size() == 2 && s[0] != s[1]) return false;

            // set<char>st;
        while(s.size() != 2){
            string temp;
            for(int i = 0 ; i< s.size() -1 ; i++){
                int sum = (s[i] - '0') + (s[i+1] - '0');
                int rem = sum % 10;
                temp.push_back(rem + '0');
                // st.insert(rem);
            }
            // if(st.size() == 1) return true;
            // st.clear();
            s = temp;
        }
        return s[0] == s[1];
    }
};