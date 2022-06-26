#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        if(abs(a-b)==1){
            if(a%2==0){
                int x=a-1;
                if(b==x)
                    cout<<"YES\n";
                else    
                    cout<<"NO\n";
            }
            if(a%2==1){
                int x=a+1;
                if(b==x)
                    cout<<"YES\n";
                else    
                    cout<<"NO\n";
            }
        }
        else if(abs(a-b)==2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}