class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S){
        vector <int> dist(V,INT_MAX);
        priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mh;
        mh.push({0,S});
        dist[S] = 0; 
        while(!mh.empty()){
            int dis = mh.top().first;
            int node = mh.top().second;
            mh.pop();
            for(auto i:adj[node]){
                int adjNode = i[0];
                int wt = i[1];
                if(dis + wt < dist[adjNode]){
                    dist[adjNode] = dis + wt;
                    mh.push({dist[adjNode],adjNode});
                }
            }
        }
        return dist;
    }
};
