class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool count[26]={};
        int ans=words.size();
        for(int i=0;i<allowed.size();i++)
            count[allowed[i]-'a']=true;
        for(int i=0;i<words.size();i++)
            for(int j=0;j<words[i].size();j++)
                if(count[words[i].at(j)-'a']==false){
                    ans--;
                    break;
                }
        return ans;
    }
};
