class Solution {
public:
    int ans = 0;
    long long dfs(int node ,int parent , vector<vector<int>>&tree , int k ,  vector<int>& values){
        long long sum = values[node];
        for(int v : tree[node]){
            if(v == parent) continue;
            sum += dfs(v , node , tree, k , values );
       }
       if((sum % k) == 0){
        ans++;
        return 0;
       }
       return sum;
    }

    int maxKDivisibleComponents(int n, vector<vector<int>>& edges,
                                vector<int>& values, int k) {
        vector<vector<int>> tree(n);
        for (int i = 0; i < n-1; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            tree[u].push_back(v);
            tree[v].push_back(u);
        }
        dfs( 0 , -1 ,  tree , k , values);
        return ans;
    }
};