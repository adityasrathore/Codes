class Solution {
public:
    string toGoatLatin(string sentence) {
        int n=sentence.size();
        vector <string> v;
        string t="";
        for(int i=0;i<n;i++){
            if(sentence[i] == ' '){
                v.push_back(t);
                t="";
                continue;
            }
            if(i == n-1){
                t+=sentence[i];
                v.push_back(t);
            }
            t+=sentence[i];
        }
        string c="ma";
        string ans="";
        string a="a";
        unordered_map <char,int> mp;
        mp['a']=1;
        mp['e']=1;
        mp['i']=1;
        mp['o']=1;
        mp['u']=1;
        mp['A']=1;
        mp['E']=1;
        mp['I']=1;
        mp['O']=1;
        mp['U']=1;
        
        for(auto i:v){
            // cout<<i[0]<<endl;
            if(mp[i[0]]){
                ans+=i;
                ans+=c;
                ans+=a;
            }
            else{
                char temp=i[0];
                i.erase(i.begin(),i.begin()+1);
                ans+=i;
                ans+=temp;
                ans+=c;
                ans+=a;
            }
            a+='a';
            ans+=' ';   
        }
        ans.erase(ans.end()-1,ans.end());
        return ans;
    }
};
