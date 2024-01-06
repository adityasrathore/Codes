// class Solution {
// public:
//     vector<int>dp;
// int find(vector<vector<int>>& events,int idx,int end){
//     if(idx==events.size())
//         return 0;
//     if( events[idx][0] < end )
//         return find( events, idx + 1 , end );
//     if( dp[idx] != -1)
//         return dp[idx];
//     int res= max ( events[idx][2] + find(events, idx + 1 , events[idx][1] ),  find(events , idx + 1 , end ) );
//     return dp[idx] = res;
// }
// int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit){
//     vector<vector<int>>events(startTime.size(),vector<int>(3,0));
//     for(int i=0;i<startTime.size();i++){
//         events[i][0]=startTime[i];
//         events[i][1]=endTime[i];
//         events[i][2]=profit[i];
//     }
//     sort(events.begin() , events.end());
//     int n = events.size();
//     dp.resize( n,-1);
//     return find(events , 0 , 0);
//     }
// };

class Solution {
public:
    int N, dp[1000001];
    int solve(vector<vector<int>>&nums, int idx){
        if(idx >= N) return 0;
        if(dp[idx]) return dp[idx];
        int lo = 0, hi = N - 1, newJobTime = N + 1;
        while(lo <= hi){
            int mid = (lo + hi) >> 1;
            if(nums[mid][0] >= nums[idx][1]) newJobTime = mid, hi = mid - 1;
            else lo = mid + 1;
        }
        return dp[idx] = max(solve(nums, idx + 1), nums[idx][2] + solve(nums, newJobTime));
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        N = size(profit);
        vector<vector<int>> nums;
        for(int i = 0; i < N; ++i) nums.push_back({startTime[i], endTime[i],  profit[i]});
        sort(begin(nums), end(nums));
        return solve(nums, 0);
    }
};
