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

class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums){
	    int n = nums.size();
	    vector<int> dp1(n,1);
	    vector<int> dp2(n,1);
	    int maxLen1 = 1;
	    int maxLen2 = 1;
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(nums[i] > nums[j] && dp1[i] < 1 + dp1[j])
	                dp1[i] = 1 + dp1[j];
	        }
	    }
	    for(int i=n-2;i>=0;i--){
	        for(int j=n-1;j>i;j--){
	            if(nums[i] > nums[j] && dp2[i] < 1 + dp2[j])
	                dp2[i] = 1 + dp2[j];
	        }
	    }
	    int sum = 0;
	    for(int i=0;i<n;i++){
	        dp1[i] += dp2[i]; 
	        sum = max(sum,dp1[i]);
	    }
	    return sum - 1;
	}
};
