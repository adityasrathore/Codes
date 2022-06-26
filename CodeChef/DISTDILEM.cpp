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
            int q;
            cin>>q;
            v.push_back(q);
        }
        int x=v.at(a-1); 
        v.pop_back();
        v.push_back(x/2);
        v.push_back(x/2);
        set <int> S;
        for(int i=0;i<v.size();i++){
            S.insert(v.at(i));
        }
        cout<<S.size()<<endl;
    }
}