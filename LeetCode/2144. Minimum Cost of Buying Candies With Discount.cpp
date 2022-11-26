class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater <int> ());
        int n=cost.size();
        int count=2;
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=cost[i];
            count--;
            
            if(count==0 && i<=n-1){
                count=2;
                i++;
            }
        }
        return ans;
    }
};
