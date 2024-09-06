class Solution {
public:
    int maxProfit(vector<int>& arr) {

        int n = arr.size();
        int buyPrice = arr[0];
        int profit = 0;
        for(int i =1; i<n ; i++){
            int currentPrice = arr[i];
            if(currentPrice<buyPrice)
            {
                buyPrice = currentPrice;
            }
            profit = max(profit , (currentPrice - buyPrice));
        }
        return profit;


        
    }
};