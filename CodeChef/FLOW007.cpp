#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long a;
        cin>>a;
        long x=0;
        while(a>0){
            x=a%10+x*10;
            a=a/10;
        }
        cout<<x<<endl;
    }
}