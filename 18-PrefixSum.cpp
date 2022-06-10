#include <bits/stdc++.h>
using namespace std;
void PrefixSum(int *arr,int n){
    int prefix[100],sum=0,summax=0;
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            i>0 ? sum=prefix[j]-prefix[i-1]:prefix[j];
            summax=max(summax,sum);
        }
    }
    cout<<summax<<endl;
}
int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    PrefixSum(arr,n);
    return 0;
}