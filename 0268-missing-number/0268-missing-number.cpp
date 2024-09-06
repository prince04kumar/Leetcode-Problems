class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int size = arr.size();
        int start = 0;
        int end = arr.size()-1;
        int mid = start+ (end - start )/2;

        while(start<=end){
            if(arr[mid+1]-arr[mid]!=1){
                return arr[mid+1];
            }
            else if (arr[mid]-mid==0){
                start = mid +1;
               mid = start+ (end - start )/2;

            }
            else if (arr[mid]-mid==1){
                end
            }
        }

    }
};