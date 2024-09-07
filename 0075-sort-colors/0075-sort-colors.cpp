class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size()-1;
        int low = 0;
        int mid = 0;
        int high = n;
        while (mid <= high) {
            if (arr[mid] == 0) {
                int temp = arr[low];
                arr[low] = arr[mid];
                arr[mid] = temp;
                low++;
                mid++;
            }
           else if(arr[mid]==1) {
                mid++;
            }
            else{
                int temp = arr[high];
                arr[high] = arr[mid];
                arr[mid] = temp;
                high--;
                

            }

            
        }
    }
};