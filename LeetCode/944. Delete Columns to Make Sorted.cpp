class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m=strs[0].size();
        int n=strs.size();
        int count=0,temp;
        
        for(int i=0;i<m;i++){ // Simple For loop traversal through the columns
            temp=0;
            for(int j=1;j<n;j++){
                if(strs[j-1][i]>strs[j][i])
                    temp++;// If Column isn't sorted then temp would increase
            }
            if(temp>0) // If temp is incremented then the columns are unsorted 
                count++; // Columns to be deleted
        }
        return count;
    }
};
