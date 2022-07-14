#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,j,m,n;
        cin>>i>>j>>m>>n;
        int x=abs(i-m);
        int y=abs(j-n);
        if(i==m && j==n){
            cout<<"YES\n";
        }
        else{
            if((x+y)%2==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}