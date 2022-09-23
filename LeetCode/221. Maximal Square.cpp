
adityasrathore's avatar
adityasrathore
18
a few seconds ago

class Solution {
public:
    int t[301][301];
    int maxSquare(vector<vector<char>>& matrix,int &maxi,int i,int j){
        if(matrix.size()<=i || matrix[0].size()<=j)
            return 0;
        if(t[i][j]!=-1)
            return t[i][j];
        int right=maxSquare(matrix,maxi,i,j+1);
        int diagonal=maxSquare(matrix,maxi,i+1,j+1);
        int down=maxSquare(matrix,maxi,i+1,j);
        if(matrix[i][j]=='1'){
            t[i][j]=1+min(right,min(diagonal,down));
            maxi=max(maxi,t[i][j]);
            return t[i][j];
        }
        else 
            return t[i][j]=0;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        memset(t,-1,sizeof(t));
        int maxi=0;
        maxSquare(matrix,maxi,0,0);
        return maxi*maxi;
    }
};
