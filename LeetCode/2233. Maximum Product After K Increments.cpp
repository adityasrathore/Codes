class Solution {
public:
    int MOD = 1e9 + 7;
    int maximumProduct(vector<int>& nums, int k) {
        int n =  nums.size();
        priority_queue <int,vector<int>,greater<int>> h; 
        for(int i=0;i<n;i++){
            h.push(nums[i]);
        }
        while(k--){
            int temp = h.top();
            h.pop();
            temp++;
            h.push(temp);
        }
        long long prod = 1;
        while(!h.empty()){
            prod = (prod*h.top()) % MOD;
            h.pop();
        }
        return prod;
    }
};
