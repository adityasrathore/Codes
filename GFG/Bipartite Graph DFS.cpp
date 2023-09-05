class Solution {
public:
    bool dfs(int node,int c, vector<int> &color,vector<int>adj[]){
        color[node] = c;
        for(auto i :adj[node]){
            if(color[i] == -1){
                if(dfs(i,!c,color,adj) == false)
	                return false;
            }
            else if(color[i] == c){
                return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int> color(V,-1);
	    for(int i=0;i<V;i++){
	        if(color[i] == -1){
	            if(dfs(i,0,color,adj) == false)
	                return false;
	        }
	        
	    }
	    return true;
	}

};
