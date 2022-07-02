#include <bits/stdc++.h>
using namespace  std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char a;
        cin>>a;
        if(a=='B' || a=='b')
            cout<<"BattleShip\n";
        if(a=='C' || a=='c')
            cout<<"Cruiser\n";
        if(a=='D' || a=='d')
            cout<<"Destroyer\n";
        if(a=='F' || a=='f')
            cout<<"Frigate\n";
    }
}