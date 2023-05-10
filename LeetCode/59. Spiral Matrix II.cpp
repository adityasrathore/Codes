class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> > v(n, vector<int>(n));
        int rowStart = 0, rowEnd = n - 1;
        int colStart = 0, colEnd = n - 1;
        int count = 1;
        while(rowStart <= rowEnd && colStart <= colEnd){
            for(int i = colStart; i<= colEnd; i++)
                v[rowStart][i] = count++;
            rowStart++;
        
            for(int i = rowStart; i<= rowEnd; i++)
                v[i][colEnd] = count++;
            colEnd--;
        
            for(int i = colEnd; i>= colStart; i--)
                v[rowEnd][i] = count++;
            rowEnd--;
        
            for(int i = rowEnd; i>= rowStart; i--)
                v[i][colStart] = count++;
            colStart++;
        }
        return v;
    }
};
