class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> v;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int k=INT_MAX;
        for(int i=0;i<n-1;i++){
            k=min(k,arr[i+1]-arr[i]);
        }
        for(int i=0;i<n-1;i++){
            vector <int> t;
            if(arr[i+1]-arr[i]==k){
                t.push_back(arr[i]);
                t.push_back(arr[i+1]);
            }
            if(t.size()==2)
                v.push_back(t);
        }
        return v;
    }
};
