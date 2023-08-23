class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        unordered_map <int,int> mp;
        for(int i=0;i<n;i++)
            mp[s[i]-'a']++;
        priority_queue<pair<int,char>> mh;
        string ans = "";
        
        for(auto i:mp){
            mh.push({i.second,char(i.first + 'a')});
        }

        pair <int,char> p = mh.top();
        p.first--;
        ans += p.second;
        mh.pop();
        while(mh.size()>0){
            pair <int,char> temp = mh.top();
            mh.pop();
            ans += temp.second;
            temp.first--;
            if(p.first > 0)
                mh.push(p);
            p = temp;
        }
        if(p.first > 0)
            return "";
        return ans;
    }
};
