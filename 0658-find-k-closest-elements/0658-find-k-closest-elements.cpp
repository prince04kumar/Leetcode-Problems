class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> ans;
        int i = 0;
        int j = i + 1;
        vector < pair<int, int>> check;
        for (int i = 0; i < n; i++) {
            int diff = abs(arr[i] - x);
            check.push_back({diff, arr[i]});
        }
        sort(check.begin(), check.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 if (a.first == b.first) {
                     return a.second < b.second; // If first values are the
                                                 // same, sort by second
                 }
                 return a.first < b.first; // Otherwise, sort by first value
             });

       
        for(int j = 0 ; j<k ; j++){
            int val = check[j].second;
            ans.push_back(val);
        }
        sort(ans.begin(), ans.end());
            return ans;
    }
};