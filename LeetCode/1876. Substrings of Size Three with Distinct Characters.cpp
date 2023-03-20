class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int count=0,right=0,left=0;
        unordered_map <int,int> mp;
        if(n<3)
            return count;
        for(int i=0;i<3;i++){
            mp[s[i]-'a']++;
            right++;
        }
        right--;

        for(int i=right;i<n;i++){
            if(mp.size()==3)
                count++;
            
            if(mp[s[left]-'a']==1)
                mp.erase(s[left]-'a');
            else
                mp[s[left]-'a']--;
            right++;
            if(right<n)
                mp[s[right]-'a']++;
            left++;
        }
        return count;
    }
};
