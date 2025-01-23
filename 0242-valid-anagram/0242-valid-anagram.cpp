class Solution {
public:
    // bool isFind(string &s , char t){
    //     auto it = find(s.begin(),s.end(),t);
    // bool ans = true;
    // if (it != s.end()) {
    //    ans = true;
    // } else {
    //    ans = false;
    // }
    // return ans;
    // }
    bool isAnagram(string s, string t) {
        // bool ans = true;
        if(t.size()<s.size() || t.size()>s.size()){
            return false;
        }
        // for(int i = 0 ; i < t.size(); i++){
        //     if(!isFind(s,t[i])){
        //         return false;
        //     }
        // }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i = 0 ; i< s.size(); i++){
            if(s[i]!=t[i]) return false;
        }
        return true;
    }
};