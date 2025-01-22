class Solution {
public:
int traveling(int ind, int i , vector<int>& travel){
    int traveling_cost = 0;
    if(ind == 0){
        return 0;
    }
    else{
        for (int i = i-1 ; i>=ind ; i-- ){
            traveling_cost += travel[i];
        }
    }
    return traveling_cost;
}
   vector<int> garbageCount(const string& s) {
        vector<int> count(3, 0); // Count for G, M, P
        for (char c : s) {
            if (c == 'G') count[0]++;
            else if (c == 'M') count[1]++;
            else if (c == 'P') count[2]++;
        }
        return count;
    }


    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int length = garbage.size();
        vector<int> lastPickup(3, 0); // Last indices for G, M, P
        int totalGarbage = 0;
        vector<int> cumulativeTravel(length, 0);

        // Precompute cumulative travel times
        for (int i = 1; i < length; i++) {
            cumulativeTravel[i] = cumulativeTravel[i - 1] + travel[i - 1];
        }

        // Calculate total garbage and travel costs
        for (int i = 0; i < length; i++) {
            vector<int> counts = garbageCount(garbage[i]);

            for (int j = 0; j < 3; j++) {
                if (counts[j] > 0) {
                    totalGarbage += counts[j];
                    totalGarbage += cumulativeTravel[i] - cumulativeTravel[lastPickup[j]];
                    lastPickup[j] = i;
                }
            }
        }

        return totalGarbage;
    }
};
