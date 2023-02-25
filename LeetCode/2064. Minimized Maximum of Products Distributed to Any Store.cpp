class Solution {
public:
    bool isValid(int mid,int n,vector<int>& quantities){
        int count=0;
        for(int i=0;i<quantities.size();i++){
            if(quantities[i]<=mid)
                count++;
            else{
                int temp=quantities[i];
                while(temp>0){
                    temp-=mid;
                    count++;
                }
            }
            if(count>n)
                return false;
        }
        return true;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int s=1;
        int e=*max_element(quantities.begin(),quantities.end());
        int ans=INT_MAX;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isValid(mid,n,quantities)==true){
                ans=mid;
                e=mid-1;
            }
            else
                s=mid+1;
        }
        return ans;
    }
};
