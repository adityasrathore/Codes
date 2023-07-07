class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> dis(n,INT_MAX);
        vector<int> v;
        for(int i=0;i<n;i++){
            if(s[i] == c)
                v.push_back(i);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<v.size();j++){
                dis[i] = min(dis[i],abs(i-v[j]));
            }
        }
        return dis;
    }
};
