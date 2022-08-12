class Solution {
public:
    int guessNumber(int n) {
        int i=1;
        int j=n;
        int a;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(guess(n)==mid)
                a=mid;
            else if(guess(n)>mid)
                i=mid+1;
            else 
                j=mid-1;
        }
        return a;
    }
};
