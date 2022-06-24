#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int arr[a];
        if(a==2){
            cout<<"1 2"<<endl;
        }
        else if(a==3){
            cout<<"2 1 3"<<endl;
        }
        else{
            arr[a-1]=a;
            arr[a-2]=1;
            if(a%2==0){
                for(int i=a-3;i>=0;i--){
                    if(i%2==1){
                        arr[i]=arr[i+1]+(i+1);
                    }
                    else    
                        arr[i]=abs(arr[i+1]-(i+1));
                }
            }
            else{
                for(int i=a-3;i>=0;i--){
                 if(i%2==0){
                    arr[i]=arr[i+1]+(i+1);
                }
                else    
                    arr[i]=abs(arr[i+1]-(i+1));
                }
            }
            for(int i=0;i<a;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
    return 0;

}