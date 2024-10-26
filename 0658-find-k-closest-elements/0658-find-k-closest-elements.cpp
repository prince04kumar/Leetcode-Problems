class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> ans;
        int s = 0;
        int e = n - 1;
        while (e - s >= k) {
            if (x - arr[s] > arr[e] - x) {
                s++;
            }
           
            else {
                e--;
            }
        }
        while (s <= e) {
            ans.push_back(arr[s]);
            s++;
        }
    

    return ans;
}
}
;