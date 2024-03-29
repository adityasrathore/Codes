DFS 

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

----------------------------------------------

BFS Kahn's

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]){
	    queue<int> q;
	    int inDeg[V] = {0};
	    for(int i=0;i<V;i++){
	        for(auto j: adj[i]){
	            inDeg[j]++;
	        }
	    }
	    for(int i=0;i<V;i++){
	        if(inDeg[i] == 0)
	            q.push(i);
	    }
	    vector<int> v;
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        v.push_back(node);
	        	        
	        for(auto i:adj[node]){
	            inDeg[i]--;
	            if(inDeg[i] == 0)
	                q.push(i);
	        }
	    }
	    return v;
	}
};
