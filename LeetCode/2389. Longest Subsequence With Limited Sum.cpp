class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        vector <int> v(m,0);
        vector <int> pref(n+1,0);
        sort(nums.begin(),nums.end());
        for(int i=1;i<=n;i++)
            pref[i]=pref[i-1]+nums[i-1]; // Calculate Prefix Sum " 0 1 3 7 12 " (n+1) From Ex
        
        for(int i=0;i<m;i++)
            for(int j=1;j<=n;j++)
                 if(queries[i]>=pref[j]) // Checking that Query is greater than the Prefix 
                    v[i]=j;
				else 
                    break;

        return v;
    }
};
