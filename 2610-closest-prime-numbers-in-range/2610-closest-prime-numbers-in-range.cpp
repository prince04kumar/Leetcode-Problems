class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        if(left==1){
            left++;
        }
        vector<bool> arr(right+1, true);
        vector<int> brr;
        vector<int> ans(2);
        ans[0] = -1;
        ans[1] = -1;

        for (int i = 2; i <= right; i++) {
           long long int j = 2 * i;
            while (j <=right) {
                arr[j] = false;
                j += i;
            }
        }
        for (int k = left; k <right; k++) {
            if (arr[k]) {
                brr.push_back(k);
            }
        }
        if(arr[right]){
            brr.push_back(right);
        }
       
        int mindiff = INT_MAX;
        for (int i = 1; i < brr.size(); i++) {
            int diff = brr[i] - brr[i - 1];
            if (diff < mindiff && brr.size() >= 2) {
                mindiff = diff;
                ans[0] = brr[i-1];
                ans[1] = brr[i];
            }
        }
     
        return ans;
    }
};