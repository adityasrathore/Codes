class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> left(n,1);
        for(int i=1;i<n;++i)
            if(ratings[i-1] < ratings[i])
                left[i] = left[i-1] + 1;
        
        int right = 1;
        for(int i=n-2;i>=0;--i){
            if(ratings[i] > ratings[i+1]){
                right++;
                left[i] = max(right,left[i]);
            }
            else
                right = 1;
        }
        int sum = accumulate(left.begin(),left.end(),0);
        return sum;
    }
};
