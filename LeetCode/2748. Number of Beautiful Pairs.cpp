class Solution {
public:
    int left(int num){
        int n = 0;
        while(num>0){
            n = num%10;
            num/=10;
        }
        return n;
    }
    int right(int num){
        return num%10;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int l = left(nums[i]);
                int r = right(nums[j]);
                if(gcd(l,r) == 1)
                    count++;
            }
        }
        return count;
    }
};
