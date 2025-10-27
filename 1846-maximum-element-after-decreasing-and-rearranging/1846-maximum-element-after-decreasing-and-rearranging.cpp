class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
         sort(arr.begin() , arr.end());
        // return *st.rbegin();
        arr[0] = 1;
        int maximum = arr[0];
        for(int i = 1 ; i< arr.size() ; i++){
            if(abs(arr[i]-arr[i-1]) > 1 ){
                arr[i] -= (arr[i] - arr[i-1] -1);
            }
            cout<<arr[i]<<" ";
            maximum = max(maximum , arr[i]);
        }
        return maximum;
    }
};