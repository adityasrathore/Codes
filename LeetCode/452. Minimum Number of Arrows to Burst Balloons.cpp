class Solution {
public:
    static bool comp(vector <int> &a,vector <int> &b){
        if(a[1]<b[1])
            return true;
        return false;
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        sort(points.begin(),points.end(),comp);
        int count=1;
        int temp=points[0][1];
        for(int i=1;i<n;i++){
            if(temp < points[i][0]){
                temp=points[i][1];
                count++;
            }
        }
        return count;
    }
};
