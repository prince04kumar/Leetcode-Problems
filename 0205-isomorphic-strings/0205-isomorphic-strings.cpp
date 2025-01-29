class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char , char >s1;
        unordered_map<char , char >t1;
        for(int i = 0 ;i<s.size(); i++){
            if(s1.count(s[i]) && s1[s[i]]!= t[i]) return false;
            if(t1.count(t[i]) && t1[t[i]]!= s[i]) return false;
           
            s1[s[i]]=t[i];
            t1[t[i]]=s[i];
        }
    return true;
    }
};