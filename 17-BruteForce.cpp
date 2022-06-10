#include <bits/stdc++.h>
using namespace std;
void printSubarr(int arr[],int n){
    int sum=0,maxsum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxsum=max(maxsum,sum);
            sum=0;
        }
    }
    cout<<"Max SubArray "<<maxsum<<endl;
}
int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    printSubarr(arr,n);
    return 0;
}