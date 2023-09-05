class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(int node,vector<int> &vis,stack <int> &s,vector<int> adj[]){
	    vis[node] = 1;
	    for(auto i:adj[node]){
	        if(!vis[i])
	            dfs(i,vis,s,adj);
	    }
	    s.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]){
	    vector<int> vis(V,0);
	    stack <int> s;
	    for(int i=0;i<V;i++){
	        if(!vis[i])
	            dfs(i,vis,s,adj);
	    }
	    vector<int> v;
	    while(!s.empty()){
	        v.push_back(s.top());
	        s.pop();
	    }

	    return v;
	}
};
