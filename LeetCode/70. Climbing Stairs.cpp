class Solution {
public:
    int climbStairs(int n) {
        if(n==1)return 1;
        else if(n==2)return 2;
        int ans = 0;
        int a = 1,b = 2;
        for(int i=3;i<=n;i++){
            ans = a+b;
            a = b;
            b = ans;
        }
        return ans;
    }
};
