class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.size();
        vector <char> v(n);
        for(int i=0;i<n;i++)
            v[indices[i]]=s[i];
        
        string str="";
        for(char i:v)
            str+=i;
        return str;
    }
};
