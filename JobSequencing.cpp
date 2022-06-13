#include <bits/stdc++.h>
using namespace std;
class Job{
    public:
    string id;
    int deadline;
    int profit;
};

int main()
{
    Job k[6]={ {"J1",5,200},{"J2",3,180},{"J3",3,190},
               {"J4",2,300},{"J5",4,120},{"J6",2,100} };  
    int n=sizeof k/sizeof k[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(k[i].profit<k[j].profit){
                swap(k[i],k[j]);
            }
        }
    }
    string result[n];
    bool slot[n];
    for(int i=0;i<n;i++)
        slot[i]=false;
    for(int i=0;i<n;i++){
        for(int j=k[i].deadline;j>0;j--){
            if(slot[j]==false){
                result[j]=k[i].id;
                slot[j]=true;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(slot[i]==true)
            cout<<result[i]<<" ";
    }

}