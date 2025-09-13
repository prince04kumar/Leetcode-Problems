class Solution {
public:
    int maxFreqSum(string s) {
        
        priority_queue<pair<char,int>>que;
        map<char, int>mapr;
        
        for(int i = 0 ; i < s.size() ; i++){
                mapr[s[i]]++;
        }
  
      
        int maxV = 0 ;
        int maxC = 0 ;
        for(const auto&c: mapr){
            if(c.first == 'a' ||c.first == 'e' ||c.first == 'i' ||c.first == 'o' ||c.first == 'u'){
                maxV = max(maxV , c.second);
            }
            else{
                maxC = max(maxC , c.second);
            }
        }
        return maxV + maxC;
    }
};