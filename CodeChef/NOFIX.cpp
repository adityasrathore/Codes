#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector <int> v;
        for(int i=0;i<a;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int r=0,c=0;
        for(int i=0;i<a;i++){
                r=i+c+1;
            if(v.at(i)==r){
                c++;
            }
        }
        cout<<c<<endl;
    }   
}