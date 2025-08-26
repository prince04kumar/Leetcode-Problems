class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        int area =0;
        int diag = 0;
        for(int i = 0 ; i< n ; i++){
           
           int diagc= (dimensions[i][0]*dimensions[i][0] + dimensions[i][1]*dimensions[i][1]);
           
            if(diagc > diag){
                area = dimensions[i][0]*dimensions[i][1];
                diag = diagc;
            }
            else if(diagc == diag){
                area = max(area ,dimensions[i][0]*dimensions[i][1] );
            }
        }
        return area;
    }
};