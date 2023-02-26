class Solution {
public:
    int minimumSum(int num) {
        int a[4]={};
        int i=0;
        while(num){
            a[i]=num%10;
            num/=10;
            i++;
        }
        sort(a,a+4);
        return (a[1]+a[0])*10+a[3]+a[2];
    }
};
