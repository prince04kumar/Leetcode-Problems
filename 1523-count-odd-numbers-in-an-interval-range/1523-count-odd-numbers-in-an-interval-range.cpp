class Solution {
public:
    int countOdds(int low, int high) {
       if((low & 1) == 0 && (high&1)== 0 ) return (high - low + 1)/2;
       if((low & 1) != 0 && (high&1)!= 0 ) return (high - low + 1)/2 +1;
       if((low & 1) == 0 && (high&1)!= 0 || (low & 1) != 0 && (high&1) == 0 ) return (high - low + 1)/2;

    return 0;
    }
};