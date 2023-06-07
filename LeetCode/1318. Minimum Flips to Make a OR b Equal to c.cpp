class Solution {
public:
    int minFlips(int a, int b, int c) {
        int aTemp,bTemp,cTemp;
        int res=0;
        while(a>0 || b>0 || c>0){
            aTemp=a%2;bTemp=b%2;cTemp=c%2;
            if(cTemp==1 && aTemp+bTemp==0)
                res++;
            else if(cTemp==0)
                res+=aTemp+bTemp;
            a/=2;b/=2;c/=2;
        }
        return res;
    }
};
