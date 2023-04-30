class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map <char,int> mp;
        for(auto i:brokenLetters)
            mp[i]++;
        int n=text.size();
        
        vector <string> v;
        string t="";
        for(int i=0;i<n;i++){
            if(text[i] == ' '){
                v.push_back(t);
                t="";
                continue;
            }
            if(i == n-1){
                t+=text[i];
                v.push_back(t);
            }
            t+=text[i];
        }
        int count=v.size();
        // for(auto i:v)
        //     cout<<i<<endl;
        for(auto i:v){
            for(auto j:i){
                if(mp[j]>0){
                    count--;
                    break;
                }
            }
        }
        
        return count;
    }
};
