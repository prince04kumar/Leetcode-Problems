class Solution {
public:
    bool kokocan(vector<int>piles , int h , int k){
       long long int totalHours = 0;
        for(int i =0 ; i< piles.size() ; i++){
           totalHours  += ceil(piles[i]/ (double)k);
        }
        return totalHours <= h;
    }
  
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int e = *max_element(piles.begin() , piles.end());
        int mid = s + (e-s)/2;
        int ans = 0;
        while(s<=e){
              int k = mid;
              if(kokocan(piles , h , k)){
                ans = k;
                e = mid - 1;
              }
              else{
                s = mid + 1;
              }
        mid = s + (e-s)/2;
        }
        
        return ans;
    }
};