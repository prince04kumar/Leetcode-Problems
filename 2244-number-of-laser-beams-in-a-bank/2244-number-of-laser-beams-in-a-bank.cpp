class Solution {
public:
    int Nofones(string s ){
        int si = s.length();
        int count = 0 ; 
        for(int i = 0 ; i < si; i++){
            if(s[i]=='1'){
                count++;
            }
        }
        return count;
    }
    int numberOfBeams(vector<string>& bank) {
        int size = bank.size();
        int noflaser = 0;
        int previcount = 0 ;  
      for ( int i  = 0 ; i< size ; i++){
        int currCount = Nofones(bank[i]);
        cout<<'currCount'<<' '<<i<<' '<<currCount<<endl;
        if(currCount > 0){
            int laser = currCount * previcount; 
            noflaser+=laser;
            previcount = currCount;
        }
      }
    
        
        return noflaser;
    }
};