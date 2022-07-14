#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int n=c/b;
        int sum=0;
        if(a*b<c)
            sum=a*b*b;
        else
            sum=n*b*b+(c-n*b)*(c-n*b);
        cout<<sum<<endl;
    }
    return 0;
}