class Solution {
public:
    string removeOuterParentheses(string s) {
        string st; 
        int open = 0;
        int close = 0;
        int s_in = -1;
        
        for(int i=0; i < s.size(); i++)
        {
            if(s[i]=='(')
            {
                if(s_in==-1)
                    s_in = i;
                open++;
            }
            if(s[i]==')')
            {
                close++;
            }
            
            if(open==close&&open==1)
            {
                open = 0;
                close = 0;
            }
            
            if(open==close&&open!=1)
            {
                //cout << s_in+1 << i-1 << "\n";
                   
                    //st += s.substr(s_in+1, i-1);
                
                for(int j = s_in+1; j < i; j++)
                    st += s[j];
                //cout << st << "\n";
                s_in = -1;
                open = 0;
                close = 0;
            }
        }
        /*if(st[st.size()-1]==st[st.size()-2])
            st = st.substr(0, st.size()-1);*/
        return st;
        
    }
};