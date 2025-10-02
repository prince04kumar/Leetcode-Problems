class Solution {
public:

    int maxBottlesDrunk(int fullBottles, int numExchange) {
         ios::sync_with_stdio(false);
    cin.tie(nullptr);
        if (fullBottles < numExchange)
            return fullBottles;

        int add = 0;
        int emptBot = fullBottles;
        while (emptBot > 0) {
            if (add + emptBot >= numExchange) {
                add++;
            }
            if (emptBot < numExchange){
                 emptBot = 0;
            }
            else{
                emptBot -= numExchange;
            }
               
            numExchange++;
        }
        return fullBottles + add;
    }
};