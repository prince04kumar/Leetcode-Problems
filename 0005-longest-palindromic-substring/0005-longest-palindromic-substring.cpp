class Solution {
public:
   string longstring(string s , int i , int j){
        string longstr = "";
    while(i>=0 && j<s.size() && s[i]==s[j]){
        longstr = s.substr(i , j - i +1);
      
        i--;
        j++;       
    }
    
return longstr;

   }
    string longestPalindrome(string s) {
        int longsize = INT_MIN;
        string ls = "";
        int count = 0;
        while(count < s.size()){
                int i = count;
                int j = count;
                string odds = longstring(s , i , j );
                string eves = longstring(s , i , j+1 );
                if(odds.length()> eves.length()){
                    ls = ls.length() > odds.length()?ls:odds;
                }
                else{
                    ls=ls.length()>eves.length()?ls:eves;
                }

                count++;

        }
        return ls;
    }
};