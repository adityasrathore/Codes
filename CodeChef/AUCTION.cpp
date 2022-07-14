#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==max(a,max(b,c)))
            cout<<"Alice"<<endl;
        if(b==max(a,max(b,c)))
            cout<<"Bob"<<endl;
        if(c==max(a,max(b,c)))
            cout<<"Charlie"<<endl;
    }
}