class Compare{
public:
    bool operator()(const pair<int,pair<int,int>> &a,const pair<int,pair<int,int>> &b){
        if(a.first < b.first)
            return true;
        return false;
    }
};

class Solution {
public:

    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int m = nums1.size();
        int n = nums2.size();
        vector<vector<int>> ans;
        priority_queue <pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,Compare> h;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int sum = nums1[i]+nums2[j];
                if(h.size() < k)
                    h.push({sum,{nums1[i],nums2[j]}});
                else if(h.top().first > sum){
                    h.pop();
                    h.push({sum,{nums1[i],nums2[j]}});
                }
                else break;
            }
        }
        while(h.size() > 0){
            vector<int> v(2);
            pair<int,pair<int,int>> p = h.top();
            v[0] = p.second.first;
            v[1] = p.second.second;
            h.pop();
            ans.push_back(v);
        }
        return ans;
    }
};
