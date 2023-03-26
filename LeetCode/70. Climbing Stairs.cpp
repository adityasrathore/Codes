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




class Solution {
public:
    int climbStairs(int n) {
        if(n<=1)
            return n;
        int p1=1;
        int p2=1;
        int curr;
        for(int i=2;i<n+1;i++){
            curr=p1+p2;
            p2=p1;
            p1=curr;
        }
        return curr;
    }
};
