class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i=1;i<=n-2;i++){
            for(int j=i+1;j<=n-1;j++){
                for(int k=j+1;k<=n;k++){
                    if((i*i==j*j+k*k) || (j*j==i*i+k*k) || (k*k==i*i+j*j))
                        count++;
                }
            }
        }
        return count*2;
    }
};1925. Count Square Sum Triples
