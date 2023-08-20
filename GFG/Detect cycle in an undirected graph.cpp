class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool detectCycle(int node,vector<int> &vis,int V, vector<int> adj[]){
        vis[node] = 1;
        queue<pair<int,int>> q;
        q.push({node,-1});
        while(!q.empty()){
            int n = q.front().first;
            int p = q.front().second;
            q.pop();
            for(auto i:adj[n]){
                if(!vis[i]){
                    vis[i] = 1;
                    q.push({i,n});
                }
                else if(p != i)
                    return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V);
        for(int i=0;i<V;i++){
            if(vis[i] != 1)
                if(detectCycle(i,vis,V,adj) == true)
                    return true;
        }
        return false;
    }
};
