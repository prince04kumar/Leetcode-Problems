class Solution {
public:
    string reverseOnlyLetters(string s) {
        string b = "";
        string a = "";
        for(char c : s){
            if(c >='a' && c <= 'z' || c>='A' && c<='Z'){
                b.push_back(c);
            }
        }
        reverse(b.begin(),b.end());
        int ind = 0 ; 
        for(char c : s){
             if(c >='a' && c <= 'z' || c>='A' && c<='Z'){
               a.push_back(b[ind]);
               ind++;
            }
            else{
                 a.push_back(c);
            }
        }
        return a ;

        
    }
};