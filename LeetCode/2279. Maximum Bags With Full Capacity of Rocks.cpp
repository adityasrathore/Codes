class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=rocks.size();
        int full=0;
        vector <int> diff(n,0);
        for(int i=0;i<n;i++)
            diff[i]=capacity[i]-rocks[i];
        sort(diff.begin(),diff.end());
        for(int i=0;i<n;i++){
            if(diff[i]==0)
                full++;
            else if(additionalRocks>=diff[i]){
                full++;
                additionalRocks-=diff[i];
            }
        }
        return full;
    }
};
