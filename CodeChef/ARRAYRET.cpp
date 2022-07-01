#include <iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        long long sum=0;
        for(long long i=0;i<n;i++)
            cin>>a[i];
        for(long long i=0;i<n;i++)
            sum+=a[i];
        long long d=sum/(n+1);
        for(long long i=0;i<n;i++)
            cout<<abs(a[i]-d)<<" ";
        cout<<endl;
    }
}
