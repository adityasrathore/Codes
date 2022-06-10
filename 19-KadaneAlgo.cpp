#include <bits/stdc++.h>
using namespace std;
void Kadane(int *arr,int n){
    int maxsum=0,sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxsum)
            maxsum=sum;
        if(sum<0)
            sum=0;
    }
    cout<<"Max Sum Subarray using Kadane: "<<maxsum<<endl;
}
int main(){
    // int arr[]={-2,3,4,-1,5,-12,6,1,3};//Ans - 11
    int arr[]={-2,3,4,-1,5,-12,6,1,3,2};//Ans - 12
    int n=sizeof(arr)/sizeof(int);
    Kadane(arr,n);
    return 0;
}