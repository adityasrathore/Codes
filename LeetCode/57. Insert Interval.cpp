class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        int i=0;
        vector <vector<int>> ans;
        
        while(i<n && intervals[i][1] < newInterval[0])
            ans.push_back(intervals[i++]); // Before Intersection
        
        while(i<n && intervals[i][0] <= newInterval[1]){ //During intersection finding the new points and it's range correspondingly
            newInterval[0]=min(newInterval[0],intervals[i][0]);
            newInterval[1]=max(newInterval[1],intervals[i][1]);
            i++;
        }
        ans.push_back(newInterval);
        while(i<n) //Adding the left over points after the intersection of the interval.
            ans.push_back(intervals[i++]);

        return ans;
    }
};
