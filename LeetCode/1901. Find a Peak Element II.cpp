class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat[0].size();
        int n=mat.size();
        int s=0;
        int e=m-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int row=0;
            for(int i=0;i<n;i++){
                if(mat[row][mid]<mat[i][mid]) 
                    row=i;
            }
            if((mid==0 || mat[row][mid]>mat[row][mid-1]) && 
               (mid==m-1 || mat[row][mid]>mat[row][mid+1])) // Checking Border Cond. , Top & Bottom
                return {row,mid};
            else if(mid<m-1 && mat[row][mid+1]>mat[row][mid]) //Choosing the more Promising Side where maximum is present
                s=mid+1;
            else
                e=mid-1;
        }
        return {-1,-1}; //If no element satisfies the conditon thus return {-1,-1}
    }
};
