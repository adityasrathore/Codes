class Solution {
public:
    int trap(vector<int>& v) {
    int n=v.size();
    vector <int> left(n);
    left[0]=v[0];
    vector <int> right(n);
    right[n-1]=v[n-1];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],v[i]);
    }
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],v[i]);
    }
    int totalWater=0;
    for(int i=0;i<n;i++)
        totalWater+=min(right[i],left[i])-v[i];
        
    return totalWater;
    }
};
