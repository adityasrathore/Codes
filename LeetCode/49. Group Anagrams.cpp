O(n^2)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map <string,vector<string>> mp;
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){
            vector<int> v(26,0);
            for(int j=0;j<strs[i].size();j++)
                v[strs[i][j]-'a']++;
        
            string t = "";
            for(int k=0;k<26;k++)
                t += to_string(k+'a') + to_string(v[k]);
            
            mp[t].push_back(strs[i]);
        }
        for(auto i:mp)
            ans.push_back(i.second);
        
        return ans;
    }
};

-------------------------------------------------
O(n^2 * logn)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> mp;
        for(auto i: strs){
            string temp=i;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(i);
        }
        vector <vector<string>> v;
        for(auto i:mp)
            v.push_back(i.second);
        
        return v;
    }
};
