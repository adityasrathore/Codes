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


class Solution {
public:
    int lowerBound(vector <int>& nums,int s,int e,int key){
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==key){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]>key)
                e=mid-1;
            else
                s=mid+1;
        }
        return ans;
    }
    int upperBound(vector <int>& nums,int s,int e,int key){
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==key){
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]>key)
                e=mid-1;
            else
                s=mid+1;
        }      
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> v(2);
        int s=0;
        int e=nums.size()-1;
        v[0]=lowerBound(nums,s,e,target);
        v[1]=upperBound(nums,s,e,target);
        return v;
    }
};
