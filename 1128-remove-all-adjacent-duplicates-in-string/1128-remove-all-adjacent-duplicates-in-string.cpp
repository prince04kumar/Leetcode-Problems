class Solution {
public:
    string removeDuplicates(string s) {
        string a;
        int len = s.length();
        int c = 0;
        for(int i =0; i<len ; i++){
            if(a.length()==0){
                a.push_back(s[i]);
            }
            else if(s[i]==a[a.length()-1]){
                    a.pop_back();
            }
            else {
                a.push_back(s[i]);
            }
        }
        return a;
    }
};