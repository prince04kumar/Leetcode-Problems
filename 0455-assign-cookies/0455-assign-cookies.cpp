class Solution {
    #define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());

        int count = 0;
        int i = 0;
        int j = 0;
        while(j<s.size() && i< g.size()){
            if(g[i]<=s[j]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return count;


        
    }
};