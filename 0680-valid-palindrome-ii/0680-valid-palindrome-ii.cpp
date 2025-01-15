class Solution {
public:
    bool isPalindrom(string s , int l , int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            else {
                l++;
                r--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int size  = s.length();
        int left = 0;
        int right = size -1;
        bool  ans = true;
         while(left<right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
          else if(s[left]!=s[right]){
                if(isPalindrom(s , left+1, right)){//check for left
                    ans = true;
                    break;
                }
                else if (isPalindrom(s , left , right-1)){//check for right
                    ans = true;
                    break;
                }
                else{
                    ans = false;
                    break;
                }
           }
            }
         
       return ans;
        
    }
};