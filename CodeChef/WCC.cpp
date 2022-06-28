#include  <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        string s;
        cin>>a;
        cin>>s;
        int c=0,n=0,d=0;
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='C')
                c++;
            else if(s.at(i)=='N')
                n++;
            else 
                d++;
        }
        if(c>n)
            cout<<60*a<<endl;
        else if(c==n)
            cout<<55*a<<endl;
        else
            cout<<40*a<<endl;
    }
    return 0;
}