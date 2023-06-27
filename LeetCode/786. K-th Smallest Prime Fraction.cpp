class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();
        priority_queue <pair<float,pair<int,int>>> h;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                float frac = 1.0*arr[i]/arr[j];
                h.push({frac,{arr[i],arr[j]}});
                if(h.size() > k)
                    h.pop();
            }
        }
        vector<int> v(2);
        v[0] = h.top().second.first;
        v[1] = h.top().second.second;
        return v;
    }
};
