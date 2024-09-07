class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>zeros;
        for(int i =0; i< nums.size() ; i++){
            if(nums[i]==0){
                zeros.push_back(nums[i]);
            }
        }
        for(int i =0; i< nums.size() ; i++){
            if(nums[i]==1){
                zeros.push_back(nums[i]);
            }
        }
        for(int i =0; i< nums.size() ; i++){
            if(nums[i]==2){
                zeros.push_back(nums[i]);
            }
        }

        for(int j=0; j<nums.size() ; j++){
            nums[j]=zeros[j];
        }
        
    }
};