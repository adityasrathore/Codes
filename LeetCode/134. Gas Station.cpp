class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int g=accumulate(gas.begin(),gas.end(),0);
        int c=accumulate(cost.begin(),cost.end(),0);
        if(c>g)
            return -1; //Not possible
        int start=0,total=0;
        int n=gas.size();
        for(int i=0;i<n;i++){
            total+=(gas[i]-cost[i]);
            if(total<0){
                start=i+1;
                total=0;
            }
        }
        return start;
    }
};
