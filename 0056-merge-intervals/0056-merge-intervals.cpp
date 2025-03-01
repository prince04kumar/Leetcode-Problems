class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
       int size = a.size();
     
    sort(a.begin(), a.end() , [](const vector<int>&x , const vector<int>&y) {
        if(x[0]==y[0])
        return x[1] < y[1];
        else {
           return x[0]<y[0];
        }
    });
    


    vector<vector<int>>answer;
    answer.push_back(a[0]);
    int j = 0;

    for(int i = 1 ; i< a.size(); i++){
    vector<int>check = a[i];
    if(answer[j][1] >= check[0]){
    if(answer[j][1] >= check[1]) 
        continue;
        else{
    answer[j][1] = check[1];
        }
    }
    else{
        answer.push_back(check);
        j++;
    }

        
    }
    return answer; 
    }
};