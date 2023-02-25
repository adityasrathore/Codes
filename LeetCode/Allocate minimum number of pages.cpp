class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isValid(int mid,int m,int a[],int n){
        int count=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum>mid){
                count++;
                sum=a[i];
            }
            if(count>m)
                return false;
        }
        return true;
    }
    int findPages(int A[], int N, int M) 
    {
        if(N<M)
            return -1;
            
        int s=*max_element(A,A+N);
        int e=accumulate(A,A+N,0);
        // sort(A,A+N);
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isValid(mid,M,A,N)==true){
                ans=mid;
                e=mid-1;
            }
            else
                s=mid+1;
        }
        return ans;
    }
};
