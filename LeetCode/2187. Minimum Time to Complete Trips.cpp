class Solution {
public:
    bool isValid(long long mid,vector<int>& time,int totalTrips){
        long long count=0;
        for(auto i:time){
            count+=(mid/i);
            if(count>=totalTrips)
                return true;
        }
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long s=1;
        long long e=1+1e14;
        long long ans=0;
        while(s<=e){
            long long mid=s+(e-s)/2;
            if(isValid(mid,time,totalTrips)==true){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};
