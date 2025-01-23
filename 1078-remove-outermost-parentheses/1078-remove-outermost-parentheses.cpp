class Solution {
public:
    string removeOuterParentheses(string s) {
     int size = s.size();
     string ans;
     int bal = 0;
     for(int i = 0; i<size ; i++){
        if(s[i]=='('){
            if(bal>0){
                ans+=s[i];
            }
            bal++;

        }
        else{
            bal--;
            if(bal>0){
                ans+=s[i];
            }

        }
     }
     return ans;
    }
};