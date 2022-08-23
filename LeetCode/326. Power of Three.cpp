class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
            return false;        
        double x=log10(n)/log10(3);
        if(x==(int)x)
            return true;
        else 
            return false;
	    // if(n <= 1) 
	    // return n == 1;
	    // return ((n%3==0) && isPowerOfThree(n/3));
    }
};
