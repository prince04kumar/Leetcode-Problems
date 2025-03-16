class Solution {
public:
//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    bool check(vector<int>& ranks,long long int cars, long long time) {
        long long carsDone = 0;

        for (int i = 0; i < ranks.size(); i++) {
            
                carsDone += sqrt(time / ranks[i]);
            
        }

        return carsDone >= cars;
    }

    long long repairCars(vector<int>& ranks, int cars) {
        long long mini = *min_element(ranks.begin(), ranks.end());  
        long long s = 1, e = mini *  cars * cars;  
        long long time = e;  
        while (s <= e) {
            long long mid = s + (e - s) / 2;

            if (check(ranks, cars, mid)) {
                time = mid;
                e = mid - 1;  
            } else {
                s = mid + 1;  
            }
        }

        return time;
    }
};