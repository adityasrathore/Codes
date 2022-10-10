class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n=points.size();
        int manDis=INT_MAX;
        int idx=-1;
        for(int i=0;i<n;i++)
            if(x==points[i][0] || y==points[i][1]){
                int tempDis=abs(x-points[i][0])+abs(y-points[i][1]);
                if(manDis>tempDis){
                    manDis=tempDis;
                    idx=i;
                }
            }
        return idx;
    }
};
