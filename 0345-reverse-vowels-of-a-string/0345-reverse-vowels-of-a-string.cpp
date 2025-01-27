class Solution {
public:
    bool isVowel(char s){
        if(s == 'a' || s == 'e' || s == 'i' || s == 'o' ||
                s == 'u' || s == 'A' || s == 'E' || s == 'I' ||
                s == 'O' || s == 'U'){
                return true;
                }
                return false;
    }
      string reverseVowels(string s) {
        int i = 0;
        int j = s.size()-1;

        while(i<j){
            if(isVowel(s[i])&&isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isVowel(s[i]) ){
                j--;
            }
            else if(!isVowel(s[i])){
                i++;
            }
        }
        return s;
    }
};
  