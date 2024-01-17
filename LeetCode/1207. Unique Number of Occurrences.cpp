class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map <int,int> mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        set <int> s;
        
        for(auto i:mp){
            if(s.find(i.second)!=s.end())
                return false;
            s.insert(i.second);
        }
        return true;
    }
};

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map <int,int> mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        set <int> s;
        
        for(auto i:mp){
            if(s.find(i.second)!=s.end())
                return false;
            s.insert(i.second);
        }
        return true;
    }
};
