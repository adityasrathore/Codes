class Solution {
public:
    string capitalizeTitle(string title) {
        vector <string> v;
        int n=title.size();
        string s="";
        
        for(int i=0;i<n;i++)
            if(title[i]>='A' && title[i]<='Z')
                title[i]+=32;
        
        for(int i=0;i<n;i++){
            if(title[i]==' '){
                v.push_back(s);
                s="";
                continue;
            }
            s+=title[i];
            if(i==n-1){
                v.push_back(s);
            }
        }
        s="";
        cout<<v.size();
        for(int i=0;i<v.size();i++){
            if(v[i].size()>2){
                v[i][0]-=32;
            }
            s+=v[i];
            if(i!=v.size()-1)
                s+=' ';
        }
        return s;
    }
};
