class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map <char,int> mp1;
        unordered_map <char,int> mp2;
        for(char i:s)
            mp1[i]++;
        for(char i:t)
            mp2[i]++;
        int change=0;
        for(auto i:mp2){
            if(i.second-mp1[i.first]>0)
                change+=i.second-mp1[i.first];
        }
        return change;
    }
};
