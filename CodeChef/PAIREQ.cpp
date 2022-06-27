#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int c=0;
        vector <int> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i]!=a[j])
                    c++;
            }
            v.push_back(c);
            c=0;
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
    return 0;
}