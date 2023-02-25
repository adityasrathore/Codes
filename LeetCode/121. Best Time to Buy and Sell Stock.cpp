class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<n;i++){
            if(prices[i]<buy)
                buy=prices[i];
            if(prices[i]-buy>maxProfit)
                maxProfit=prices[i]-buy;
        }
        return maxProfit;
    }
};
