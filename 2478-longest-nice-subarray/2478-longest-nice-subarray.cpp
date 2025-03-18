class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int size = nums.size();
        int s = 0 ; 
        int e = 0 ;
        int tempOr = 0;
        int len = 0;
        while(s<=e && s < size && e< size)
        {
        
                 if ((tempOr&nums[e])==0){
                    tempOr|=nums[e];
                   int lentemp=(e-s+1);
                    len= max(len,lentemp);
                    e++;

                 } 
                 else{
                    tempOr ^= nums[s];
                    s++;
                    
                    
                 } 

        }
        return len;
    }
};