class Solution {
public:
    int romanToInt(string s) {
       
        map<char,int>m = {
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M' , 1000},
        };
        int sum = m[s[s.length()-1]];
    for(int i =s.length()-2; i>=0;i--){
             if(m[s[i]]>=m[s[i+1]] ){
                sum+= m[s[i]];
                    cout<<sum;
             }
             else{
                sum-=m[s[i]];
                  cout<<sum;
             }

    }
    return sum;

    }
};