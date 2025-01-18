class Solution {
public:
    int countPrimes(int n) {
        int ans = 0;
        vector<bool>primes(n,true);

        for(int i = 2; i<n ; i++){
            if(primes[i]){
                ans++;
                int j = 2*i;
                while(j<n){
                    primes[j]=false;
                    j+=i;
                }
            }
        }
        return ans;
       
    }
};