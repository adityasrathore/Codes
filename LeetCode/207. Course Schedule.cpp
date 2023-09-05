class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int V = numCourses;
        vector<int> adj[V];
        int count = 0;
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        queue<int> q;
        vector<int> inDeg(V,0);
        for(int i=0;i<V;i++){
            for(auto j:adj[i]){
                inDeg[j]++;
            }
        }
        for(int i=0;i<V;i++){
            if(inDeg[i] == 0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node = q.front();
            q.pop();
            count++;
            for(auto i:adj[node]){
                inDeg[i]--;
                if(inDeg[i] == 0)
                    q.push(i);
            }
        }

        if(count == V)
            return true;
        return false;
    }
};
