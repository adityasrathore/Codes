class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = size(dist), ans = 0, T = 0;
        multiset<double> s;
        for(int i = 0; i < n; i++) s.insert(dist[i] * 1. / speed[i]);   
        for(auto& el : s) 
            if(T >= el) break;   
            else ans++, T++;    
        return ans;
    }
};
