class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int diagSum=0,j=0;
        for(int i=n-1;i>=0;i--){
            diagSum+=mat[i][i];
            if(j!=i)
                diagSum+=mat[j][i];
            j++;
        }
        return diagSum;
    }
};
