class Solution
{
    public:
    vector <int> calculateSpan(int price[], int n){
        vector <int> v(n);
        stack<pair<int,int>> s;
        
        for(int i=0;i<n;i++){
            while(!s.empty() && s.top().first <= price[i])
                s.pop();
            if(s.empty())
                v[i] = -1;
            else
                v[i] = s.top().second;   
                
            s.push({price[i],i});
        }
        for(int i=0;i<n;i++){
            v[i] = i - v[i];
        }
        return v;
    }
};
