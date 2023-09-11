class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        vector<int> adj[N];
        for(int i=0;i<M;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> dist(N,999);
        queue<int> q;
        q.push(src);
        dist[src] = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto i:adj[node]){
                if(dist[node] + 1 < dist[i]){
                    dist[i] = 1 + dist[node];
                    q.push(i);
                }
            }
        }
        for(int i=0;i<N;i++){
            if(dist[i] == 999)
                dist[i] = -1;
        }
        return dist;
    }
};
