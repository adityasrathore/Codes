class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int water=0;
        while(right>left){
            water=max(water,(right-left)*min(height[left],height[right]));
            if(height[left]>height[right])
                right--;
            else
                left++;
        }
        return water;
    }
};
