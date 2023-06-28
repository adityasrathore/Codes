class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> v(n);
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && s.top() > prices[i])
                s.pop();
            
            if(s.empty())
                v[i] = -1;
            else
                v[i] = s.top();
                
            s.push(prices[i]);
        }
        for(int i=0;i<n;i++)
            if(v[i] != -1)
                v[i] = prices[i] - v[i];
            else
                v[i] = prices[i];
        return v;
    }
};
