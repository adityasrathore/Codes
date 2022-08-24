class Solution {
public:
    bool checkPowersOfThree(int n) {
        // if(n==1)
        //     return true;
        // if(n%3==2)
        //     return false;
        // return checkPowersOfThree(n/3);
        while(n){
            int x=n%3;
            if(x==2)
                return false;
            n/=3;
        }
        return true;
    }
};
