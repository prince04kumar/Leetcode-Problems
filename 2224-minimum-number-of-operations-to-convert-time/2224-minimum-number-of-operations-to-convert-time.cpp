class Solution {
public:
    int convertTime(string current, string correct) {
        // lets convert time into min
        int current_min = stoi(current.substr(0, 2)) * 60 + stoi(current.substr(3, 2));
        int correct_min = stoi(correct.substr(0, 2)) * 60 + stoi(correct.substr(3, 2));
        int steps = 0;

        vector<int>inc_time = {1 , 5 , 15 , 60};
        int remaining_min = correct_min - current_min;
        for(int i = 3  ; i>=0 ; i--){
            int to_inc_time = inc_time[i];
          int remaining_steps = remaining_min / to_inc_time;
          if(remaining_steps) steps+= remaining_steps;
          cout<<to_inc_time<<" ";
          remaining_min -= to_inc_time*remaining_steps;
        }

        return steps;
    }
};