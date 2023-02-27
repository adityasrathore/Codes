class Solution {
public:
    int addDigits(int num) {
        
        while(num!=num%10){
            int temp=0;
            int n=num;
            while(n){
                temp+=n%10;
                n/=10;
            }
            num=temp;
        }
        return num;
    }
};
