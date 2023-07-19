class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int prev = 0;
        int ans = 0;
        for(int i=1;i<n;i++) {
            if(intervals[i][0] < intervals[prev][1] && intervals[i][1] <= intervals[prev][1]){
                ans++;
                prev = i;
            }
            else if(intervals[i][0]<intervals[prev][1] && intervals[i][1]>intervals[prev][1])
                ans++;
            
            else
                prev = i;
        }
        return ans;
    } 
};
