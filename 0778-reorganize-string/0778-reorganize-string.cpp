class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] ={0};
        for(int i = 0 ; i<s.size(); i++){
            hash[s[i]-'a']++;
        }

        char max_freq_char;
        int max_freq = INT_MIN;
        for(int i = 0 ; i< 26; i++){
            if(hash[i]>max_freq){
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        }
        cout<<max_freq_char<<endl;
        
        //Place max freq no.
        int ind = 0;
        while(max_freq > 0 && ind < s.size() ){
            s[ind] = max_freq_char;
            ind+=2;
            max_freq--;
        }

        if(max_freq!=0) return "";

        else{
            hash[max_freq_char -'a'] = 0;
            for(int i = 0 ; i< 26; i++){
                while(hash[i] > 0){
                    ind = ind>s.size()-1?1:ind;
                    s[ind] = i + 'a';
                    hash[i]--;
                    ind += 2;
                }
            }
        }
        return s;

    }
};