class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> v(heights.begin(),heights.end());
        sort(v.begin(),v.end());
        int count = 0;
        for(int i=0;i<n;i++){
            if(heights[i] != v[i])
                count++;
        }
        return count;
    }
};
