class Solution {
public:
    int countPoints(string rings) {
        int R[10]={0};
        int G[10]={0};
        int B[10]={0};
        unordered_map <int,int> mp;
        int n=rings.size();
        for(int i=0;i<n;i+=2){
            if(rings[i]=='R'){
                R[rings[i+1]-'0']+=1;
            }
            if(rings[i]=='G'){
                G[rings[i+1]-'0']+=1;
            }
            if(rings[i]=='B'){
                B[rings[i+1]-'0']+=1;
            }
        }
        int count=0;
        for(int i=0;i<10;i++){
            if(min(R[i],min(G[i],B[i])))
                count++;
        }
        return count;
    }
};
