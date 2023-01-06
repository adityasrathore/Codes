class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v(n,0);
        if(n%2==1){
            for(int i=n/2+1;i<n;i++){
                v[i]=i;
                v[n-i-1]=-1*i;
            }
        }
        else{
            for(int i=n/2;i<n;i++){
                v[i]=i;
                v[n-i-1]=-1*i;
            }
        }
        return v;
    }
};
