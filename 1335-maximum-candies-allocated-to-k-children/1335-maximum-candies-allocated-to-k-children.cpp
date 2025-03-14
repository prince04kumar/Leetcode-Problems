class Solution {
public:
    bool check(vector<int>& candies , long long k , long long mid){
            long long int s = 0 ;
            for(int i = 0 ; i< candies.size() ; i++){
                    int pile = candies[i]/mid;
                    s+=pile;
            }
            if(s>=k){
                return true;
            }
            return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long int sum = 0 ;
        for(auto i : candies) sum+=i;
        if(sum<k) return 0 ;
        int s= 1; 
        long long int e = sum/k;
        long long ans = 0 ;
        int mid =s + (e-s)/2;
        while(s<=e){
            if(check(candies, k , mid)){
               ans = mid;
               s= mid+1;
            }
            else {
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};