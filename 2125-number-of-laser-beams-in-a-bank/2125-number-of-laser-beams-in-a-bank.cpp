class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int currentOnes = 0;
         for(int j = 0 ; j < bank[0].size() ; j++){
                if(bank[0][j] == '1') currentOnes++;
            }
            int laser = 0;
        for(int i = 1 ; i< n ; i++){
            int ones = 0;
            for(int j = 0 ; j < bank[i].size() ; j++){
                if(bank[i][j] == '1') ones++;
            }
            if(ones == 0 ) continue;
            laser += ones*currentOnes;
            currentOnes = ones;
        }
        return laser;
    }
};