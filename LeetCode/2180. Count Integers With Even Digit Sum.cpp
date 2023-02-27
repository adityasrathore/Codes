class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            string s=to_string(i);
            int t=0;
            int sum=0;
            while(t<s.size()){
                sum+=s[t]-'0';
                t++;
            }
            if(sum%2==0)
                count++;
        }
        return count;
    }
};

class Solution {
public:
    int countEven(int num) {
        int n=num;
        int sum=0;
        while(num){
            sum+=num%10;
            num/=10;
        }
        return sum%2==0? n/2:(n-1)/2;
    }
};
