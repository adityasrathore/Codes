class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix[0].size();
        int n=matrix.size();
        int i=0,j=m-1;
        
        while(i<n && j>=0){
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
                i++;
            else
                j--;
        }
        return false;
    }
};




class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        // cout<<m<<" "<<n<<endl;
        int i = 0;
        int j = n - 1;
        while(i < m && j >= 0){
            if(matrix[i][j] == target)
                return true;
            else if(matrix[i][j] > target)
                j--;
            else
                i++;
        }
        return false;
    }
};
