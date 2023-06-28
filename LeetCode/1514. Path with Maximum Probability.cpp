class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> v(n);
        vector<double> maxProb(n, 0);
        priority_queue<pair<double, int>> pq;
        
        for(int i=0;i<edges.size();i++){
            v[edges[i][0]].push_back({edges[i][1], succProb[i]});
            v[edges[i][1]].push_back({edges[i][0], succProb[i]});   
        }
    
        pq.push({1.0, start});
        maxProb[start] = 1;  
        
        while(!pq.empty()){
            int current = pq.top().second;
            double prevProb = pq.top().first;
            pq.pop();
            
            for(auto it : v[current]){
                if(prevProb*it.second > maxProb[it.first]){
                    maxProb[it.first] = prevProb*it.second;
                    pq.push({maxProb[it.first],it.first});
                }
            }
        }
        
        return maxProb[end];
    }
};
