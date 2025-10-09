class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        long long n = skill.size();
        long long m = mana.size();
        vector<vector<long long>>wind(m , vector<long long>(n , 0));
        long long count = 0;
        for(long long i = 0 ; i< skill.size() ; i++){
            wind[0][i] = (long long)mana[0]*skill[i] + (long long)count;
            count = wind[0][i];
        }
        

        for(long long i = 1 ; i< m ; i++){
            long long lastmax = wind[i-1][n-1] ;
            cout<<lastmax<<endl;
            long long c = wind[i-1][0] +1 ;
            wind[i][0] = wind[i-1][0] + mana[i]*skill[0];
            for(long long j = 1 ; j < n ; j++){
                wind[i][j] = max(wind[i][j-1] , wind[i-1][j]) + mana[i]*skill[j];
                
            }

            for(long long x = n-2 ; x >= 0 ; x--){
                        wind[i][x] = wind[i][x+1] - (mana[i]*skill[x+1]);
            } 
            
        }
        // for(auto & c : wind){
        //     for(auto & a : c){
        //         cout<<a<<" ";
        //     }
        //     cout<<endl;
        // }

        return wind[m-1][n-1];
    }
};