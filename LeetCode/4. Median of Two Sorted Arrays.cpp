class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> v;
        int i = 0;
        int j = 0;
        while(i < m && j < n){
            if(nums1[i] > nums2[j])
                v.push_back(nums2[j++]);
            else
                v.push_back(nums1[i++]);
        }
        
        while(i < m)
            v.push_back(nums1[i++]);
        
        while(j < n)
            v.push_back(nums2[j++]);
        
        if((m+n) % 2 == 1)
            return 1.0*v[(m+n)/2];
        else
            return 1.0*((v[(m+n)/2-1] + v[(m+n)/2])/2.0);
        
    
    }
};
