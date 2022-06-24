#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        string x,y;
        cin>>a>>x>>y;
        set <int> s;
        for(int i=0;i<a;i++){
            if(x[i]!=y[i])
                s.insert(y[i]);
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
