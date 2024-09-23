class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n - 1;
        int m = s + (e - s) / 2;
        if(s==e)return arr[s];
        if (arr[0] != arr[1]) {
            return arr[0];
        }
        if (arr[n - 1] != arr[n - 2]) {
            return arr[n - 1];
        }
        while (s <= e) {
            if (m + 1 < n && m - 1 >= 0 && arr[m] != arr[m + 1] &&
                arr[m] != arr[m - 1]) {
                return arr[m];
            }
            if (m - 1 >= 0 && arr[m] == arr[m - 1] && (m - 1) % 2 == 0) {
                s = m + 1;
            } else if (m - 1 >= 0 && arr[m] == arr[m - 1] && (m - 1) % 2 == 1) {
                e = m - 1;
            } else if (m + 1 < n && arr[m] == arr[m + 1] && m % 2 == 0) {
                s = m + 1;
            } else if (m + 1 < n && arr[m] == arr[m + 1] && m % 2 == 1) {
                e = m - 1;
            }
            m = s + (e - s) / 2;
        }
        return -1;
    }
};