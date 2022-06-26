#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b,avg;
        cin>>a>>b>>avg;
        int psum=0;
        int A[a];
        for(int i=0;i<a;i++)
            cin>>A[i];
        for(int i=0;i<a;i++)
            psum+=A[i];
        float k=(avg*(a+b)-psum)/(float)b;
        if(k>0 && k-int(k)==0)
            cout<<(int)k<<endl;
        else
            cout<<"-1\n";
    }
    return 0;
}