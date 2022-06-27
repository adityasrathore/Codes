#include <bits/stdc++.h>
using namespace std;
int Ans(int n,int p[],int s[],int a,int b){
    if(a==0)
        return s[b+1];

    if(b==n-1)
        return p[a-1];

    return gcd(p[a-1],s[b+1]);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int p[n],s[n];
        p[0]=a[0];
        for(int i=1;i<n;i++)
            p[i]=gcd(a[i],p[i-1]);
        s[n-1]=a[n-1];
        for(int i=n-2;i>=0;--i)
            s[i]=gcd(a[i],s[i+1]);
        // for(int i=0;i<n;i++)
        //     cout<<p[i]<<" "<<s[i]<<" "<<endl;
        int c=0;
        for(int i=0;i<n;i++){
            if(Ans(n,p,s,i,i)>=2)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}