class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int beautySum = 0;

        // Instead of generating substrings, use a frequency map
        for (int i = 0; i < n; i++) {
            unordered_map<char, int> freq;
            for (int j = i; j < n; j++) {
                freq[s[j]]++;  // Expand window by adding s[j]

                // Calculate beauty directly
                int maxFreq = INT_MIN, minFreq = INT_MAX;
                for (auto& p : freq) {
                    maxFreq = max(maxFreq, p.second);
                    minFreq = min(minFreq, p.second);
                }

                beautySum += (maxFreq - minFreq);
            }
        }

        return beautySum;
    }
};