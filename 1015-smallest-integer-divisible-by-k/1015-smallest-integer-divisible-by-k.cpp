class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if((k & 1) == 0 || k%5 == 0)  return -1;
        int digitcount = 1;
        int num = 1;
        while(digitcount <= k) {
            if(num % k == 0 ) return digitcount;
            num = (num*10 + 1)%k;
            cout<<num<<" ";
            digitcount++;
        }
        return -1;
    }
};