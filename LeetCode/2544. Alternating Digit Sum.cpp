class Solution {
public:
    int alternateDigitSum(int n) {
        int i=0;
        int sum=0;
        int num=0;
        while(n){
            num=num*10 + n%10;
            n=n/10;
        }
        while(num){
            sum+=pow(-1,i)*(num%10);
            num/=10;
            i++;
        }
        return sum;
    }
};
