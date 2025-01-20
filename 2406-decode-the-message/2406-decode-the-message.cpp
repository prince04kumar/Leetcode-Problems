class Solution {
public:
    string decodeMessage(string key, string message) {
        char ch = 'a';
        int size  = key.length();
        unordered_map<char, char>map;
        char space =' ';
        map[space]=space;
        for(int i =0 ; i< size; i++){

            if(map.find(key[i]) != map.end()){
                continue;
            }
            else{
                map[key[i]]=ch;
                ch++;
            }
        }
        string ans="";
        for(int j=0; j<message.length();j++){
                char messagechar = message[j];
                char mas = map[messagechar];
                ans.push_back(mas);

        }
        return ans;
    }
};