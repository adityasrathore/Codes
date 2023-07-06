class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n = s.size();
        unordered_map <char, vector<int>> mp;
        for (int i = 0; i < s.size(); i++)
            mp[s[i]].push_back(i);
        for (auto i : mp)
            if (i.second[1]-i.second[0]-1 != distance[i.first-'a'])
                return false;
        return true;
    }
};
