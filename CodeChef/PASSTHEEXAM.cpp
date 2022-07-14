#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int total=a+b+c;
        if(total>=100)
            if(a>=10 && (b>=10 && c>=10))
            cout<<"PASS\n";
            else
            cout<<"FAIL\n";
        else
            cout<<"FAIL\n";
    }
}