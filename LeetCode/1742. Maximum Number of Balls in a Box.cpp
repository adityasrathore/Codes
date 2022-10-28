class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map <int,int> mp;
        int ans=0;
        for(int i=lowLimit;i<=highLimit;i++){
            int sum=0;
            int t=i;
            while(t){
                sum+=t%10;
                t/=10;
            }
            mp[sum]++;
            ans=max(ans,mp[sum]);
        }
        return ans;
    }
};
