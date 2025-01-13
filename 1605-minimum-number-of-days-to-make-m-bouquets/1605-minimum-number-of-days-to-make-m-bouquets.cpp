class Solution {
public:
    bool isPosday(vector< int>& bloomDay, long long int size, long long int k, long long int b, long long int mid) {
        long long int f = 0;
        long long int m = 0;

        for (long long int i = 0; i < size; i++) {
            if (bloomDay[i] <= mid) {
                f++;
                if (f == k) {
                    m++;
                    f = 0;
                }

            } else if (bloomDay[i] > mid) {
                f = 0;
            }
        }
        if (m >= b)
            return true;
        else
            return false;
    }

    int minDays(vector< int>& bloomDay, long long int m, long long int k) {
        long long int s = *min_element(bloomDay.begin(), bloomDay.end());
        long long int e = *max_element(bloomDay.begin(), bloomDay.end());
        long long int ans = -1;
        long long int size = bloomDay.size();
        if (size < (m * k)) {
            ans = -1;
        }
       

        while (s <= e) {
            long long int mid = s + (e-s)/2;
            // if (s>=e){
            //     if (isPosday(bloomDay, size, k, m, mid)){
            //         ans = mid;
            //     }
            //     else ans = -1;
            //     break;
            // }
            if (isPosday(bloomDay, size, k, m, mid)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
};