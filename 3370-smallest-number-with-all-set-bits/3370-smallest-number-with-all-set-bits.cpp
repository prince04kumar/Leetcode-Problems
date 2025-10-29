class Solution {
public:
    int smallestNumber(int n) {
        if(n == 1) return 1;
        if(n== 2 ) return 3;
        int pows = 0;
        int start = 3;
        while(n > start){
            start *= 2 ;
            start++;
        }
        return start;
    }
};