class Solution {
public:
    int solve(int idx,int rod1,int rod2,vector<int>& rods){
        if(idx == rods.size()){
            if(rod1 == rod2)
                return rod1;
            return 0;
        }
        int m1 = solve(idx+1,rod1+rods[idx],rod2,rods);
        int m2 = solve(idx+1,rod1,rod2+rods[idx],rods);
        int m3 = solve(idx+1,rod1,rod2,rods);
        return max(m1,max(m2,m3));
    }
    int tallestBillboard(vector<int>& rods) {
        return solve(0,0,0,rods);
    }
};



class Solution {
public:
    int solve(int idx,int rod,vector<int>& rods,vector<vector<int>> &dp){
        if(rods.size() == idx){
            if(rod == 0)
                return 0;
            return INT_MIN;
        }
        if(dp[idx][rod+5000] != -1)
            return dp[idx][rod+5000];
        
        int m1 = rods[idx]+solve(idx+1,rod+rods[idx],rods,dp);
        int m2 = solve(idx+1,rod-rods[idx],rods,dp);
        int m3 = solve(idx+1,rod,rods,dp);
            
        return dp[idx][rod+5000] = max(m1,max(m2,m3));
    }
    int tallestBillboard(vector<int>& rods) {
        vector<vector<int>> dp(21,vector<int>(10001,-1));
        return solve(0,0,rods,dp);
    }
};
