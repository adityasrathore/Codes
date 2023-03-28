class Solution {
  public:
    vector<int> bfsOfGraph(int n, vector<int> adj[]) {
        // int n=adj.size();
        int vis[n]={0};
        vis[0]=1;
        queue <int> q;
        q.push(0);
        vector <int> v;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            v.push_back(node);
            for(auto i:adj[node]){
                if(!vis[i]){
                    vis[i]=1;
                    q.push(i);
                }
            }
            
        }
        return v;
    }
};
