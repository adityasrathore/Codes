class Solution {
public:
    void setRow(vector<vector<int>>& matrix,int k,int m){
        for(int i=0;i<m;i++)
            if(matrix[i][k] != 0)
                matrix[i][k] = INT_MIN+99;
    }
    void setCol(vector<vector<int>>& matrix,int k,int n){
        for(int i=0;i<n;i++)
            if(matrix[k][i] != 0)
                matrix[k][i] = INT_MIN+99;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0){
                    setRow(matrix,j,m);
                    setCol(matrix,i,n);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == INT_MIN+99){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
