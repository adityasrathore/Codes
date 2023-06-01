class Solution {
public:
    
    bool isValid(vector<vector<int>>& grid, int i, int j, int n, vector<vector<bool>>& vis){
        return (i>=0 and i<n and j>=0 and j<n and grid[i][j]==0 and !vis[i][j]);
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<bool>> vis(n, vector<bool>(n,false));
        queue<pair<int,int>> q;
        int count = 0;
        int node;
        if(grid[0][0] == 0){
            q.push({0, 0});
            vis[0][0] = true;
        }
        while(!q.empty()){
            node=q.size();
            count++;
            
            for(int cnt = 0; cnt < node; cnt++){
                pair<int, int> temp = q.front();
                q.pop();
                int i = temp.first, j = temp.second;
                if(i==n-1 and j==n-1) 
                    return count;
                for(int k = i - 1; k <= i + 1 ; k++){
                    for(int l = j - 1; l <= j + 1; l++){
                        if(isValid(grid, k, l, n, vis)){
                            q.push({k, l});
                            vis[k][l] = true;
                        }
                    }
                }                
            }            
        }
        return -1;
        
    }
};
