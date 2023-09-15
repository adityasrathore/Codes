class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        priority_queue <pair<int,int>, vector<pair<int,int>>, 
                                greater<pair<int, int>>> heap; 
        vector<bool> arr(n);
        heap.push({ 0, 0 });
        int mincost = 0;
        int i = 0;
        while (i < n) {
            pair<int, int> topElement = heap.top();
            heap.pop();
            int weight = topElement.first;
            int currNode = topElement.second;
            
            if (arr[currNode]) continue;
            arr[currNode] = true;
            mincost += weight;
            i++;
            
            for (int j = 0; j < n; ++j) {
                if (!arr[j]) {
                    int nextWeight = abs(points[currNode][0] - points[j][0]) + 
                                     abs(points[currNode][1] - points[j][1]);
                    
                    heap.push({ nextWeight, j });
                }
            }
        }
        
        return mincost;
    }
};
