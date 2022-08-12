class Solution {
public:
    int firstBadVersion(int n) {
        int i=1;
        int j=n;
        int a;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(isBadVersion(mid)==true){
                a=mid;
                j=mid-1;
            }
            else
                i=mid+1;
        }
        return a;
    }
};
