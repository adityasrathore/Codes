#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++)
            cin>>a[i];
        int even=0,odd=0;
        for(int i=0;i<x;i++)
            if(a[i]%2==0)
                even++;
            else    
                odd++;
        if(odd%2==1) 
            cout<<even<<endl;
        else 
            cout<<min(odd/2,even)<<endl;
    }
    return 0;
}