class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node,vector<int> &v,vector<int> &vis,vector<int> adj[]){
        vis[node]=1;
        v.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it])
                dfs(it,v,vis,adj);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector <int> vis(V,0);
        vector <int> v;
        dfs(0,v,vis,adj);
        return v;
    }
};
