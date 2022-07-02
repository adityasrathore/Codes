#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int sum=0;
        while(a>0){
            sum+=a%10;
            a=a/10;
        }
        cout<<sum<<endl;
    }
}