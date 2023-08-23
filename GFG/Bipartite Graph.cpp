class Solution {
public:
    bool solve(int start,vector<int> &color,vector<int>adj[]){
	    queue <int> q;
	    q.push(start);
	    color[start] = 0;
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        for(auto i : adj[node]){
	            if(color[i] == -1){
	                color[i] = !color[node];
	                q.push(i);
	            }
	            else if(color[i] == color[node])
	                return false;
	        }
	    }
	    return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int> color(V,-1);
	    for(int i=0;i<V;i++){
	        if(color[i] == -1)
    	        if(solve(i,color,adj) == false)
    	            return false;
	    }
	    return true; 
	}

};
