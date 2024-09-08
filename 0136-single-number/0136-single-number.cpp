class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = -1;
        unordered_map<int,int>freqMap;
        for(int i = 0 ; i<nums.size(); i++){
            int num = nums[i];
            freqMap[num]=freqMap[num]+1; 
        }
unordered_map<int , int >::iterator it;

    for (auto it : freqMap){
        int key = it.first;
        int value = it.second;
        if(value==1)
        ans = key;
       
    }
return ans;
    }
};