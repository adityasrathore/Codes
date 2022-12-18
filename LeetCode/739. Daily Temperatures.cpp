class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector <int> v(n);
        stack <pair<int,int>> s;
        for(int i=n-1;i>=0;i--){
            if(!s.empty() && s.top().first>temperatures[i])
                v[i]=s.top().second;
            while(!s.empty() && s.top().first<=temperatures[i])
                s.pop();
            if(s.empty())
                v[i]=-1;
            else
                v[i]=s.top().second;
        
            s.push({temperatures[i],i});
        }
        for(int i=0;i<n;i++){
            if(v[i]!=-1)
                v[i]=v[i]-i;
            else
                v[i]=0;
        }
        return v;
    }
};
