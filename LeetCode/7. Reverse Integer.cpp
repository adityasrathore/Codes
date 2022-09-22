class Solution {
public:
    int revInt(int x){
        long long rev=0;
        while(x>0){
            rev=rev*10+x%10;
            if(rev>INT_MAX || rev<INT_MIN)
                return 0;
            x=x/10;
        }
        return rev;
    }
    int reverse(int x) {
        if(x>0)
            return revInt(x);
        return -1*revInt(abs(x));
    }
};
