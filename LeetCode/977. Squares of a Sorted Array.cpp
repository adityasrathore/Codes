class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int l=0; int r=n-1;
        vector <int> v(n);
        for(int k=n-1;k>=0;k--){
            int val1=nums[l]*nums[l];
            int val2=nums[r]*nums[r];
            if(val1>val2){
                v[k]=val1;
                l++;
            }
            else{
                v[k]=val2;
                r--;
            }
        }
        return v;
    }
};
