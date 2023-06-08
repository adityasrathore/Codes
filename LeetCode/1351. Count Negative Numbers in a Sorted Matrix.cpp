class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(grid[i][j]<0)
                    count++;
            
        return count;
        // int count=0;
        // int m=grid.size();
        // int n=grid[0].size();
        // for(int i=0;i<m;i++){
        //     int l=0;
        //     int r=n;
        //     while(r>=l){
        //         int mid=l+(r-l)/2;
        //         if(grid[i][mid]<0)
        //             count=
        //     }
        // }
    }
};
  // [4,3,2,-1],
  // [3,2,1,-1],
  // [1,1,-1,-2],
  // [-1,-1,-2,-3]
