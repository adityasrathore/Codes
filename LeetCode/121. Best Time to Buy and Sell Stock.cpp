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


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minP = prices[0];
        int maxProfit = 0;
        for(int i=1;i<n;i++){
            minP = min(prices[i],minP);
            maxProfit = max(maxProfit,prices[i]-minP);
        }
        return maxProfit;
    }
};


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int m = prices[0];
        int maxProfit = 0;
        for(int i=1;i<n;i++){
            if(prices[i] - m > maxProfit){
                maxProfit = prices[i] - m;
            }
            m = min(m,prices[i]);
        }
        return maxProfit;
    }
};
