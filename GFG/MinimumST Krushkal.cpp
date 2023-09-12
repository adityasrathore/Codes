
class DisjointSet{
    vector <int> rank,parent;
    public:
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i] = i;
            
        }
    }
    int findUParent(int node){
        if(node == parent[node])
            return node;
        return parent[node] = findUParent(parent[node]);
    }
    void unionByRank(int u,int v){
        int ulp_u = findUParent(u);
        int ulp_v = findUParent(v);
        if(ulp_u == ulp_v)
            return;
        if(ulp_u < ulp_v){
            parent[ulp_u] = ulp_v;
        }
        else if(ulp_v < ulp_u){
            parent[ulp_v] = ulp_u;
        }
        else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]){
        vector <pair<int,pair<int,int>>> edges;
        for(int i=0;i<V;i++){
            for(auto j:adj[i]){
                int wt = j[1];
                int v = j[0];
                int u = i;
                edges.push_back({wt,{u,v}});
            }
        }
        sort(edges.begin(),edges.end());
        int sum = 0;
        DisjointSet d(V);
        for(auto i:edges){
            int u = i.second.first;
            int v = i.second.second;
            int wt = i.first;
            if(d.findUParent(u) != d.findUParent(v)){
                sum += wt;
                d.unionByRank(u,v);
            }
        }
        return sum;
    }
};
