#include <bits/stdc++.h>
using namespace std;
void printSubarr(int arr[],int n){
    int sum=0;
    vector <int> v;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                sum+=arr[k];
                v.push_back(sum);
                cout<<arr[k]<<",";
            }
            cout<<"Sum: "<<sum<<endl;
            sum=0;
        }
    }
    cout<<"Max SubArray "<<*max_element(v.begin(),v.end())<<endl;
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    printSubarr(arr,n);
    return 0;
}