
USE LOWER BOUND

class Solution {
public:
    // int binarySearch(int mul,vector <int> &v,long long success){
    //     int s=0;
    //     int e=v.size()-1;
    //     int ans;
    //     while(s<=e){
    //         int mid=s+(e-s)/2;
    //         if(mul*v[mid]>=success){
    //             ans=mid;
    //             e=mid-1;
    //         }
    //         else{
    //             s=mid+1;
    //         }
    //     }
    //     return ans;
    // }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        sort(potions.begin(),potions.end());
        vector <int> v;
        for(int i=0;i<n;i++){
            long temp=(success+spells[i]-1)/spells[i];
            int pairs=potions.end()-lower_bound(potions.begin(),potions.end(),temp);
            v.push_back(pairs);
        }
        return v;
    }
};
