class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=INT_MIN;
        for(int i=0;i<accounts.size();i++){
            int temp=accumulate(accounts[i].begin(),accounts[i].end(),0);
            cout<<temp<<endl;
            maxi=max(maxi,temp);
        }
        return maxi;
    }
};
