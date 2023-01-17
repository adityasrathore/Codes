class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int zeroToOne=0;
        int oneCount=0;
        int i=0,n=s.size();
        while(i<n && s.at(i)!='1')
            i++;
        for(;i<n;i++){
            if(s[i]=='0')
                zeroToOne++;
            else
                oneCount++;
            if(zeroToOne>oneCount)
                zeroToOne=oneCount;
        }
        return zeroToOne;
    }
};
