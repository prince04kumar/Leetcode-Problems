class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int emptyBottle = numBottles;
        int total = numBottles;
        while(emptyBottle >= numExchange){
            int newFilled = emptyBottle/ numExchange;
            total += newFilled;
            emptyBottle = newFilled + emptyBottle%numExchange;
        }
        return total;
    }
};