class Solution {
public:
    bool isValid(int mid,int days,vector<int>& weights){
        int sum=0;
        int d=1;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum>mid){
                sum=weights[i];
                d++;
            }
            if(d>days)
                return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s=*max_element(weights.begin(),weights.end());
        int e=accumulate(weights.begin(),weights.end(),0);
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isValid(mid,days,weights)==true){
                ans=mid;
                e=mid-1;
            }
            else
                s=mid+1;
        }
        return ans;
    }
};
