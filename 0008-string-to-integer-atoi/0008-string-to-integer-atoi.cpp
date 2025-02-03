class Solution {
public:
    int myAtoi(string s) {
        bool start = false;
      long long  int ans = 0;
      int sign = 1;
      bool signche = false;

        for (int i  = 0 ;i< s.size(); i++){
            if(s[i]>='0' && s[i] <= '9'){
                start = true;
                 if(ans >= INT_MAX && sign==1) return INT_MAX;
                 if(ans >= INT_MAX && sign==-1) return INT_MIN;
       
                ans*=10;
                ans+=s[i]-'0';
                signche = true;
               

            }
            else if (s[i]==' '){
                
                    if(start) break;
                    start = ans>0?true:false;
                   }
            else if(s[i]>='a' && s[i] <= 'z' || s[i]=='.') break;
            else{
                if(s[i] == '+' || s[i]=='-'){
                    if(signche) {
                        break;
                    }
                    else{
                        sign = s[i]=='+'?1:-1;
                        signche = true;
                        start=true;
                    }
                    
                }
                else{
                    continue;
                }
            }

        }

        ans*=sign;
        if(ans >= INT_MAX) return INT_MAX;
        if(ans <= INT_MIN) return INT_MIN;
        return ans;
        
    }
};