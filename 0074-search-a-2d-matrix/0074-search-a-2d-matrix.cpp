class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int n = rows * cols;

        int s = 0 ;
        int e = n-1;
        int mid  = s + (e-s)/2;
        while (s<=e){
            int rowsInd = mid/cols;
            int colsInd = mid % cols;

                if(matrix[rowsInd][colsInd] == target){
                    return true;
                }          
                else if(matrix[rowsInd][colsInd] < target){
                    s = mid+1;
                }
                else {
                    e = mid - 1;
                }
            mid  = s + (e-s)/2;

        }
        return false;
        
    }
};