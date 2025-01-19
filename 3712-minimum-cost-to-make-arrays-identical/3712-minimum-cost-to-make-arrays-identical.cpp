class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
       long long int total_cost=0;
       long long int total_cost2=0;
        int ans2 = INT_MIN;
        int ans1 = INT_MIN;
         for(int i=0; i<arr.size(); i++){
          long long int diff = abs(arr[i]-brr[i]);
           total_cost2+=diff;
        }
        sort(arr.begin(),arr.end());
        sort(brr.begin(),brr.end());
        
         for(int i=0; i<arr.size(); i++){
          long long  int diff = abs(arr[i]-brr[i]);
           total_cost+=diff;
        }
        if(arr.size()>=2)
       total_cost =  total_cost+k;
        
        else{  total_cost =  total_cost;}
        
       long long int ans = min( total_cost ,  total_cost2);

        return ans;
        
    }
};