#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int d=b-a;
        if(d%3!=2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}