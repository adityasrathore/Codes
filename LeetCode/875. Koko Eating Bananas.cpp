class Solution {
public:
    bool isValid(vector<int>& piles, int h,int mid){
        long hours=0;
        for(int i:piles){
            hours+=i/mid;
            if(i%mid!=0)
                hours++;
        }
        return hours<=h ? true:false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int s=1,e=1e9;
        int ans;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isValid(piles,h,mid)==true){
                ans=mid;
                e=mid-1;
            }
            else
                s=mid+1;
        }
        return ans;
    }
};
