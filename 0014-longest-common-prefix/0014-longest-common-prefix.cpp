class Solution {
public:
    bool isAns(vector<string>& strs , string sub){
        bool ans = true;
        for(int i = 0; i< strs.size(); i++){
            if(strs[i].find(sub) == string::npos || strs[i].find(sub) !=0){
                ans = false;
                return false;
            }
        }
       cout<<ans<<endl;
        return ans;

    }
    string longestCommonPrefix(vector<string>& strs) {
        string s0 = strs[0];
        string lcp = "";
        int start = 0;
        for(int i = 0 ; i< s0.size(); i++){
            string st = s0.substr(start,i-start+1);
          //  cout<<st<<endl;
            if(isAns(strs , st)){
                lcp=st;
              //  cout<<lcp<<"  "<<endl;
            }
            else{
               break;
            }

        }
        return lcp;
    }
};