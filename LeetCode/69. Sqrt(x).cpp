class Solution {
public:
    int mySqrt(int s) {
        int i=0,j=s;
        int ans=-1;
        while(i<=j){
            long long int mid=i+(j-i)/2;
            if(mid*mid==s)
                return mid;
            else if(mid*mid<s){
                i=mid+1;
                ans=mid;  
            }
            else
                j=mid-1;
        }
        return ans;
    }
};
