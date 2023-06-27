class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        priority_queue <int> h;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(h.size() < k)
                    h.push(matrix[i][j]);
                else if(h.top() > matrix[i][j]){
                    h.pop();
                    h.push(matrix[i][j]);
                }
                else break;
                    
            }
        }
        return h.top();
        
    }
};
