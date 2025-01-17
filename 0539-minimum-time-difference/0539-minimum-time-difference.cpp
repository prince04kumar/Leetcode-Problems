class Solution {
public:
int strCon(string s) {
    int hours = stoi(s.substr(0, 2)); //stoi is used to convert string into integer 
    int min = stoi(s.substr(3, 2));// substr is used to take substring form the original string , it takes starting index and length of the substring

    int timeInMin = hours * 60 + min;
    return timeInMin;
}
vector<int> convertToIntMin(vector<string>& str) {
    vector<int> s1(str.size());
    for (int i = 0; i < str.size(); i++) {
        s1[i] = strCon(str[i]);
    }
    return s1;
}


    int findMinDifference(vector<string>& timePoints) {
       vector<int> timeInMin = convertToIntMin(timePoints);
    for (int i = 0; i < timeInMin.size(); i++) {
       // cout << timeInMin[i] << " ";
    }

    sort(timeInMin.begin(), timeInMin.end());
    int minimum = INT_MAX;
    for(int i=1; i<timeInMin.size(); i++){
        int diff  = timeInMin[i] - timeInMin[i-1];
        if(diff > 720){
           diff = 1440 - diff;
        }
        if(diff < minimum){
            minimum = diff;
            }
    }
    int last_diff =1440 - timeInMin.back() + timeInMin.front() ;
    minimum = min(minimum, last_diff);

   return minimum;
       
    }
};