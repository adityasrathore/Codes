#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int c=0;
        c=x/100;
        if(x%100<=(10-c)){
            cout<<c+x%100<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
    return 0;
}