class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        if(n<=0)
            return false;
        double x=log2(n);
        if(x==(int)x)
            return true;
        else 
            return false;
    }
};
