class Solution  {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        int maxprofit=0;
        int m=INT_MAX;
        
        for(int i=0;i<n;i++){
            m=min(m,a[i]);
            
            // if(a[i]-m>maxprofit)
            //     maxprofit=a[i]-m;
            maxprofit=max(maxprofit,a[i]-m);
        }
        return maxprofit>0?maxprofit:0;
    }
};
