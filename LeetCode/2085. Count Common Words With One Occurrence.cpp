class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map <string,int> mp1;
        unordered_map <string,int> mp2;
        for(int i=0;i<words1.size();i++)
            mp1[words1[i]]++;
        for(int i=0;i<words2.size();i++)
            mp2[words2[i]]++;
        int count=0;
        for(auto i:mp1){
            if(mp2[i.first]==1 && i.second==1)
                count++;
        }
        return count;
    }
};
