class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int sum1= 0;
        int sum2 = 0;
        int missingNum = -1;
        for (int i = 0 ; i<=nums.size(); i ++){
            sum1 = sum1+i;
        }
        for(int j = 0 ; j< nums.size(); j++){
            sum2 = sum2 + nums[j];
        }
missingNum = sum1 - sum2;
return missingNum;
    }

};