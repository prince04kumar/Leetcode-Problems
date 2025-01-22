class Solution {
public:

   vector<int> garbageCount(const string& s) {
        vector<int> count(3, 0); 
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

     
        for (int i = 1; i < length; i++) {
            cumulativeTravel[i] = cumulativeTravel[i - 1] + travel[i - 1];
        }

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
