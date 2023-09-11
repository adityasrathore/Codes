{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]){
        vector <int> vis(V,0);
        priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mh;
        mh.push({0,0});
        int sum = 0;
        
        while(!mh.empty()){
            auto t = mh.top();
            mh.pop();
            int node = t.second;
            int wt = t.first;
            
            if(vis[node] == 1)
                continue;
            vis[node] = 1;
            sum += wt;
            
            for(auto i:adj[node]){
                if(!vis[i[0]]){
                    mh.push({i[1],i[0]});
                }
            }
        }
        return sum;
    }
};
