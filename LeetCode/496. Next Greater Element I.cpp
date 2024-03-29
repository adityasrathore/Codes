class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2=nums2.size();
    stack<int> s;
    vector <int> a(n1);
    vector<int> arr(n2);
    for (int i = n2- 1; i >= 0; i--){
        if(!s.empty() && s.top() <= nums2[i])
            arr[i]=s.top();
        while (!s.empty() && s.top() <= nums2[i])
            s.pop();
 
        if (s.empty())
            arr[i] = -1;        
        else
            arr[i] = s.top();       
 
        s.push(nums2[i]);
    }
    
    for(int i=0;i<n1;i++){
        int index=find(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
        a[i]=arr[index];
    }
    return a;
    }
};


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> v(m);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(nums1[i] == nums2[j]){
                    while(j<n){
                        if(nums1[i] < nums2[j]){
                            v[i] = nums2[j];
                            break;
                        }
                        else
                            v[i] = -1;
                        j++;
                    }
                }
            }
        }
        return v;
    }
};
