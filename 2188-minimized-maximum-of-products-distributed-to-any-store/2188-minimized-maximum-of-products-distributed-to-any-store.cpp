class Solution {
public:
    bool helper(int n, vector<int>& quantities, int mid) {
        int store = 0;
        for (int i = 0; i < quantities.size(); i++) {
            store += (quantities[i] + mid - 1) / mid;
        }
        return store <= n; 
    }

    int minimizedMaximum(int n, vector<int>& quantities) {
        int s = 1;
        int e = *max_element(quantities.begin(), quantities.end());
        int ans = 0; 

        while (s <= e) {
            int mid = s + (e - s) / 2; 
            if (helper(n, quantities, mid)) {
                ans = mid; 
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
};
