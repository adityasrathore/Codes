class Solution {
public:
    int lowerBound(vector<int>& nums, int t){
        int i=0;
        int j=nums.size()-1;
        int a=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==t){
                a=mid;
                j=mid-1;
            }
            else if(nums[mid]>t)
                j=mid-1;
            else 
                i=mid+1;
        }
        return a;
    }
    int higherBound(vector<int>& nums, int t){
        int i=0;
        int j=nums.size()-1;
        int a=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==t){
                a=mid;
                i=mid+1;
            }
            else if(nums[mid]>t)
                j=mid-1;
            else 
                i=mid+1;
        }
        return a;
    }
    vector<int> searchRange(vector<int>& nums, int t) {

        vector <int> v(2,-1);
        v[0]=lowerBound(nums,t);
        v[1]=higherBound(nums,t);
        return v;
    }
};
