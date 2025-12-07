class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {
        vector<string>st;
        int n = nums.size();
        for(int i = 0 ; i< n ; i++){
            int num = nums[i];
            string s = "";
            while(num >0) {
                    s+=to_string(num%2);
                    num /= 2;
            }
            st.push_back(s);
        }
        vector<int>r;
        for(string s : st){
            int a = stoi(s , 0, 2);
            r.push_back(a);
        }
        vector<pair<int, int>>check;
        for(int i = 0 ;i< n ; i++){
            check.push_back({r[i] , nums[i]});
        }
        sort(check.begin() , check.end());
        vector<int>ans;
        for(int i = 0 ; i< n ;i++){
            ans.push_back(check[i].second);
        }
        return ans;

    }
};