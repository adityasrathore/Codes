class Solution {
public:
    int MOD = 1000000007;
    int numberOfWays(string corridor) {
        int count=0;
        for(int i=0;i<corridor.size();i++){
            if(corridor[i]=='S') 
                count++;
        }
        if(count%2==1 or count==0) return 0;
        vector<long long> vec;
        for(int i=0;i<corridor.size();i++){
            if(corridor[i]=='S') 
                vec.push_back(i);
        }
        long long p=1;
        for(int i=1;i<vec.size()-1;i+=2){
            p*=(vec[i+1]-vec[i]);
            p%=MOD;
        }
        return p;
    }
};
