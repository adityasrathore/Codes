class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums){
	    int n = nums.size();
	    vector<int> dp1(n); // Forward
	    vector<int> dp2(n); // Backword
	    vector<int> ans(n);
	    
	    for(int i=0;i<n;i++){
	        dp1[i] = 1;
	        for(int j=0;j<i;j++){
	            if(nums[i] > nums[j] && 1 + dp1[j] > dp1[i])
	                dp1[i] = 1 + dp1[j];
	        }
	    }
	    reverse(nums.begin(),nums.end());
	    for(int i=0;i<n;i++){
	        dp2[i] = 1;
	        for(int j=0;j<i;j++){
	            if(nums[i] > nums[j] && 1 + dp2[j] > dp2[i])
	                dp2[i] = 1 + dp2[j];
	        }
	    }
	    reverse(dp2.begin(),dp2.end());
	    
	    for(int i=0;i<n;i++){
	        ans[i] = dp1[i] + dp2[i] - 1;
	    }
	    return *max_element(ans.begin(),ans.end());
	}
};
