class Solution {
public:
    int fib(int n) {
        int t[n+1];
        if(n==1 || n==0)
            return n;
        t[0]=0;
        t[1]=1;
        for(int i=2;i<n+1;i++){
            t[i]=t[i-1]+t[i-2];
        }
        return t[n];
    }
};


class Solution {
public:
    int fib(int n) {
        int t[n+1];
        if(n<=1)
            return n;
               
        t[0]=0;
        t[1]=1;
        for(int i=2;i<=n;i++)
            t[i]=t[i-1]+t[i-2];
        
        return t[n];
    }
};


class Solution {
public:
    int fib(int n) {
        if(n <= 1)
            return n;
        int one = 0;
        int two = 1;
        int temp;

        for(int i=2;i<=n;i++){
            temp = one + two;
            one = two;
            two = temp;
        }
        return temp;
    }
};
