class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        unordered_map <string,int> mp;
        for(int i=0;i<n;i++){
            if(words[i][0] > words[i][1])
                swap(words[i][0],words[i][1]);
        }
        for(auto i : words)
            mp[i]++;
        for(auto i : mp){
            count += i.second/2;
        }
        return count;
    }
};
