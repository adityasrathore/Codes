class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue <pair<int,int>> maxh;
        for(int i=0;i<arr.size();i++){
            int temp=abs(arr[i]-x);
            maxh.push(make_pair(temp,arr[i]));
            if(maxh.size()>k)
                maxh.pop();
        }
        vector <int> v;
        while(!maxh.empty()){
            int temp=maxh.top().second;
            v.push_back(temp);
            maxh.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }
};
