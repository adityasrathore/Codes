#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int c=0;
        while(a>0){
            long x=a%10;
            if(x==4)
                c++;
            a=a/10;
        }
        cout<<c<<endl;
    }
}