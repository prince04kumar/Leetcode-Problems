class Solution {
public:
    void backtrack(int node , string& digits , string &temp , vector<string>& answer,  vector<string>&dial){
        if(node == digits.size()){
            answer.push_back(temp);
            return ;
        }
        string s = dial[digits[node] - '0'];
        for(auto & c : s ){
            temp.push_back(c);
            backtrack(node + 1 , digits , temp , answer , dial);
            temp.pop_back();

        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>dial = { "" , "" , "abc" , "def" , "ghi" , "jkl" ,"mno" , "pqrs" , "tuv" , "wxyz"};
        vector<string>answer;
        string temp;
        backtrack(0 , digits , temp , answer ,dial );
        return answer;

    }
};