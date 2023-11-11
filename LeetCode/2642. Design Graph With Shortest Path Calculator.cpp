class Graph {
private:
    vector<pair<int,int>> g[101];
    int n;
public:
    Graph(int num, vector<vector<int>>& edges) {
        n = num;
        for(auto&edge: edges) 
            g[edge[0]].push_back({edge[1],edge[2]});
    }
    void addEdge(vector<int> edge) {
        g[edge[0]].push_back({edge[1],edge[2]});
    }
    int dijkstra(int src,int dest){
        set<pair<int,int>> st;
        vector<int> dist(n,1e9);
        dist[src] = 0;
        st.insert({0,src});
        while(!st.empty()){
            auto top = *st.begin();
            st.erase(st.begin());
            int wt = top.first, u = top.second;
            for(auto&[v,weight]: g[u]){
                if(wt+weight < dist[v]){
                    dist[v] = wt + weight;
                    st.insert({dist[v],v});
                }
            }
        }
        return dist[dest] == 1e9 ? -1 : dist[dest];
    }
    int shortestPath(int node1, int node2) {
        return dijkstra(node1,node2);
    }
};
