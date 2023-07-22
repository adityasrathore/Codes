class Solution {
public:
    bool isValid(int r, int c, int n){
        return r >= 0 && r < n && c >= 0 && c < n;
    }
    double knightProbability(int n, int k, int row, int column) {
        vector<vector<double>> dp1(n,vector<double>(n));
        dp1[row][column] = 1.0;
        vector<vector<int>> dir{{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1}};
        for(int move=0;move<k;move++){
            vector<vector<double>> dp2(n,vector<double>(n));
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    for(int q=0;q<8;q++){
                        int nr = i + dir[q][0];
                        int nc = j + dir[q][1];

                        if (isValid(nr, nc, n)) 
                            dp2[i][j] += dp1[nr][nc]/8.0;
                    }
                }
            }
            dp1 = dp2;
        }
        double prob = 0.0;
        for (int i=0;i<n;i++) 
            for (int j=0;j<n;j++) 
                prob += dp1[i][j];
        
        return prob;
    }
};
