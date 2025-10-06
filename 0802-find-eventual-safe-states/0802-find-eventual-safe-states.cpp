class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>>adjRev(n);
        vector<int>indegree(n , 0);
        //create rev graph and indegree 
        for(int i = 0 ;i< n ; i++){
           for(auto it : graph[i]){
                adjRev[it].push_back(i);
                indegree[i]++;
           }
        }
        //pushed all the 0 degree in queue
        queue<int>q;
        for(int i = 0 ;i< n ; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        vector<int>safeNode;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            safeNode.push_back(node);
            for(auto it : adjRev[node]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }

        }
    sort(safeNode.begin(), safeNode.end());
    return safeNode;
    }
};