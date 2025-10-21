class Solution {
public:
    bool isPalindrome(int start , int end , string s ){
     
        while(start < end){
            if(s[start] != s[end]) return false;
            start++ ;
            end--;
        }
        return true;
    }
    void allPartitions(int start , string s ,vector<vector<string>>& ans , vector<string>&temp){
        //base case 
        if(start == s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i = start ; i< s.size(); i++){
            if(isPalindrome(start , i , s)){
                temp.push_back(s.substr(start , i-start +1));
                allPartitions(i+1 , s , ans, temp);
                temp.pop_back();

            }
        }
    }
    vector<vector<string>> partition(string s) {
         vector<vector<string>> ans;
         vector<string>temp;
         allPartitions(0 , s , ans , temp);
        return ans;
    }
};