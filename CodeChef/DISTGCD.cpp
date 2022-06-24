#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int d=abs(b-a);
        set <int> s;
        int i=0;
        while(i<=d){
            int x=gcd(a+i,b+i);
            s.insert(x);
            i++;
        }
        cout<<s.size()<<endl;
    }
    return 0;
}