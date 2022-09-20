class Solution {
public:
    string sortSentence(string s) {
        int n=s.length();
        vector <pair<int,string>> v;
        string temp;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                if(s[i]>='0' && s[i]<='9'){
                    v.push_back(make_pair(s[i]-'0',temp));
                    temp="";
                    continue;
                }
                temp+=s[i];
            }
        }  
        sort(v.begin(),v.end());
        string ans;
        int t=v.size();
        int p=0;
        for(auto i:v){
            ans+=i.second;
            if(p!=t-1)
                ans+=' ';
            p++;
        }
        
        return ans;
    }
};
