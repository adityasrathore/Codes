#include <bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long n,s;
        cin>>n>>s;
        long a[n];
        for(long i=0;i<n;i++)
            cin>>a[i];
        long p=0;
        for(long i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                if(a[i]+a[i+1]>s){
                    p=-1;
                    cout<<"NO"<<endl;
                    break;
                }
                else{
                    long temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }
        if(p==0)
            cout<<"YES\n";
    }
    return 0;
}
