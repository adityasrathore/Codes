class Solution {
public:
    vector<vector<int>> v;
    vector <int> path;
    void dfs(vector<vector<int>>& graph,int curr){
        path.push_back(curr);
        if(curr == graph.size()-1){
            v.push_back(path);
        }
        else{
            for(int i:graph[curr]){
                dfs(graph,i);
            }
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(graph,0);
        return v;
    }
};
