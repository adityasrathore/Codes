class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector <int> v1(26,0);
        vector <int> v2(26,0);
        int n=words.size();
        for(int i=0;i<words[0].size();i++)
            v1[words[0].at(i)-'a']++ ;

        for(int i=1;i<n;i++){
            for(int j=0;j<words[i].size();j++)
                v2[words[i].at(j)-'a']++;

            for(int i=0;i<26;i++){
                v1[i]=min(v1[i],v2[i]);
                v2[i]=0;
            }
        }
        vector <string> ans;
        for(int i=0;i<26;i++)
            if(v1[i]>0){
                int t=v1[i];
                while(t--){
                    char c=i+'a';
                    string s;
                    s=c;
                    ans.push_back(s);
                }
            }
        return ans;
    }
};
