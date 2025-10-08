class Solution {
public:
    void dfs(int node ,vector<vector<int>>& graph , vector<vector<int>>& ans , vector<int>&path ){
        path.push_back(node);
        if(node == graph.size() -1 ) {
            ans.push_back(path);
        }
        else{
            for(int i = 0  ; i < graph[node].size() ; i++ ){
                dfs(graph[node][i] , graph , ans , path);
            }
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>path;
        vector<vector<int>>ans;
        dfs(0 , graph ,ans , path);
        return ans;
    }
};