class Solution {
public:
    // opt = 0 (Buy) 
    // opt = 1 (Sell)
    int solve(int idx,vector<int>& prices,int opt){
        if(idx == prices.size())
            return 0;
        int profit = 0;
        if(opt == 0){
            profit = max(-prices[idx]+solve(idx+1,prices,1),solve(idx+1,prices,0));
        }
        else{
            profit = max(prices[idx]+solve(idx+1,prices,0),solve(idx+1,prices,1));
        }
        return profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        return solve(0,prices,0);
    }
};
