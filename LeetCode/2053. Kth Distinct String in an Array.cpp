class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map <string,int> mp;
        for(auto i: arr)
            mp[i]++; // Calculating the Frequency
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(mp[arr[i]]==1)
                k--; // Reducing the k for the kth Distinct Value 
            if(k==0)
                return arr[i]; //When k turns to be 0 Thus,Answer is returned
        }
        return ""; // When there is no ans that has satisfied the conditions then  "" is returned
    }
};
