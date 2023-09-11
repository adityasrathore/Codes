class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    int n = matrix.size();

	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	           if(matrix[i][j] == -1)
	                matrix[i][j] = 99999999;
	           if(i == j)
	            matrix[i][j] = 0;
	        }
        }
	    
	    for(int k=0;k<n;k++){
	        for(int i=0;i<n;i++){
    	        for(int j=0;j<n;j++){
    	            matrix[i][j] = min(matrix[i][k] + matrix[k][j],matrix[i][j]);
    	        }
	        }
	    }

	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	           if(matrix[i][j] == 99999999)
	               matrix[i][j] = -1;
	        }
        }
	}
};
