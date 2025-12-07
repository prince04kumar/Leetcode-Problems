class Solution {
public:
    int largestPrime(int n) {
        if (n == 2) return 2;
        
        vector<bool> arr(n + 1, true);
        arr[0] = arr[1] = false;

        // Sieve
        for (int i = 2; i * i <= n; i++) {
            if (arr[i]) {
                for (int j = i * i; j <= n; j += i) {
                    arr[j] = false;
                }
            }
        }

        vector<int> prime;
        for (int i = 2; i <= n; i++) {
            if (arr[i]) prime.push_back(i);
        }

        long long sum = 0;
        int ans = 0;

        for (int p : prime) {
            sum += p;
            if (sum > n) break; 
            
            if (arr[sum]) ans = sum;
        }

        return ans;
    }
};
