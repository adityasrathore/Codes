class Solution {
public:
    int maxProduct(vector<int>& a) {
        int i,max1,max2;
        max1=max2=INT_MIN;
        for(int i=0;i<a.size();i++){
            if(a[i]>max1){
                max2 = max1;
                max1 = a[i];
            }
            else if(a[i]>max2){
                max2 = a[i];
            }
        }
        int ans = (max1-1) * (max2-1);
        return ans;
    }
};
