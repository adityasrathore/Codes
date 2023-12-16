Solution 1        
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2)
            return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s!=t)
            return false;
        return true;
Solution 2
        map <char,int> mp1;
        map <char,int> mp2;
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2)
            return false;
        for(int i=0;i<n1;i++)
            mp1[s[i]]++;
        for(int i=0;i<n2;i++)
            mp2[t[i]]++;
        for(auto i=mp1.begin();i!=mp1.end();i++){
            if(mp2[i->first]!=i->second)
                return false;
        }
        return true;
Solution 3
        unordered_map <int,int> mp;
        int n1=s.length(),n2=t.length();
        if(n1!=n2)
            return false;
        for(int i=0;i<n1;i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto i:mp){
            if(i.second!=0)
                return false;
        }
        return true;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // map <char,int> mp1;
        // map <char,int> mp2;
        // int n1=s.length();
        // int n2=t.length();
        // if(n1!=n2)
        //     return false;
        // for(int i=0;i<n1;i++)
        //     mp1[s[i]]++;
        // for(int i=0;i<n2;i++)
        //     mp2[t[i]]++;
        // for(auto i=mp1.begin();i!=mp1.end();i++){
        //     if(mp2[i->first]!=i->second)
        //         return false;
        // }
        // return true;
        unordered_map <int,int> mp;
        int n1=s.length(),n2=t.length();
        if(n1!=n2)
            return false;
        for(int i=0;i<n1;i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto i:mp){
            if(i.second!=0)
                return false;
        }
        return true;
        // int n1=s.length();
        // int n2=t.length();
        // if(n1!=n2)
        //     return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s!=t)
        //     return false;
        // return true;
    }   
};
