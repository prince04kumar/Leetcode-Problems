class Solution {
public:
 long long nCr(int n, int r) {
    if (r > n) return 0;
    if (r > n - r) r = n - r; 
    
    long long res = 1;
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;

    for(int i = 1 ; i<= numRows; i++){
        vector<int>resn(i);
        for(int j = 0;j<i;j++){
            // int val = nCr(i-1,j-1);
             resn[j] = nCr(i-1, j);
        }
     res.push_back(resn);
    }
        return res;
    }
};