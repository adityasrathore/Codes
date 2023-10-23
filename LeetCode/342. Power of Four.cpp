class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;        
        double x=(0.5)*log2(n); //Power to base of log goes into division
        if(x==(int)x)
            return true;
        else 
            return false;
    }
};

--------------------------

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;        
        double x=(1.0)*(log(n)/log(4));
        if(x==(int)x)
            return true;
        else 
            return false;
    }
};
