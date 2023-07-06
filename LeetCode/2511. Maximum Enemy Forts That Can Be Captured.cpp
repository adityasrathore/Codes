class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n = forts.size();
        int len = 0;
        int j = 0;
        for(int i=0;i<n;i++){
            if(forts[i] == 1){
                if(forts[j] == -1)
                    len = max(len,i-j-1);
                j = i;
                
            }
            if(forts[i] == -1){
                if(forts[j] == 1)
                    len = max(len,i-j-1);
                j = i;
            }
        }
        return len;
    }
};
