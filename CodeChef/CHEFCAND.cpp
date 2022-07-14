#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a<=b){
            cout<<"0\n";
        }
        else{
            int r=a-b;
            if(r%4==0){
                cout<<r/4<<endl;
            }
            else 
                cout<<r/4+1<<endl;
        }
    }
}