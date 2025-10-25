class Solution {
public:
    int totalMoney(int n) {
        int x = 0;
        int sum = 0;
        for(int i = 1 ; i<= n ; i++ ){
            if(i%7 == 0) {
                sum+= 7+x;
                x++;
            }
            else{
                sum+=(i%7 + x);
            }
            cout<<sum<<" ";
        }
        return sum;
        
    }
};