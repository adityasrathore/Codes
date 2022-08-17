  return max_element(nums.begin(),nums.end())-nums.begin();


    int n=nums.size();
    int i=0;
    int j=n-1;
    int a=-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if((mid-1>=0 && nums[mid]>nums[mid-1])&&  
           (mid+1<n && nums[mid]>nums[mid+1]))
            return a=mid;
        else if(mid-1>=0 && nums[mid-1]>nums[mid])
            j=mid-1;
        else
            i=mid+1;
    }
    return a;
