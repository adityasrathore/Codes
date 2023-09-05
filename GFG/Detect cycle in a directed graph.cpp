class Solution {
  public:
    bool dfs(int node,vector<int>&vis,vector<int>&pathVis,vector<int> adj[]){
        vis[node] = 1;
        pathVis[node] = 1;
        for(auto i:adj[node]){
            if(vis[i] == 0){
                if(dfs(i,vis,pathVis,adj) == true){
                    return true;
                }
            }
            else if(vis[i] == 1 && pathVis[i] == 1){
                return true;
            }
        }
        pathVis[node] = 0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        vector <int> vis(V,0);
        vector <int> pathVis(V,0);
        for(int i=0;i<V;i++){
            if(vis[i] == 0){
                if(dfs(i,vis,pathVis,adj) == true)
                    return true;
            }
        }
        return false;
    }
};
