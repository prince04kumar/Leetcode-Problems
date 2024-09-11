class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2;
        int ansidx = -1;
        // while(s<e){
        //       mid = s + (e-s)/2;
        //      if(arr[mid]<arr[mid+1]){
        //         s = mid + 1;
        //      }
        //      else if(arr[mid]>arr[mid+1]){
        //         e= mid;
        //      }
        //      else{
        //        ans = mid;
        //        break;
        //      }

        // }
        while(s<=e){
            if(arr[mid]<arr[mid+1]){
                s = mid + 1;
            }
            else{
                ansidx = mid;
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ansidx;
    }
};