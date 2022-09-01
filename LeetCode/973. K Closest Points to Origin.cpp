class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue <pair<int,pair<int,int>>> maxh;
        for(int i=0;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            int dist=x*x+y*y;
            maxh.push({dist,{x,y}});
            if(maxh.size()>k)
                maxh.pop();
        }

        vector <vector<int>> v;
        while(maxh.size()>0){
            pair <int,int> p=maxh.top().second;
            vector <int> temp(2);
            temp[0]=p.first;
            temp[1]=p.second;
            v.push_back(temp);
            maxh.pop();
        }
        return v;
    }
};
