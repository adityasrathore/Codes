#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int p=0;
        for(int i=0;i<n;i++){
            if(v[i]==1){
                p=1;
                break;
            }
        }
        int sum=accumulate(v.begin(),v.end(),0);
        if(p==1){
            cout<<"CHEF\n";
        }
        else{
            if(sum%2==0)
                cout<<"CHEFINA\n";
            else
                cout<<"CHEF\n";
        }
    }
}