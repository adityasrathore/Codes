class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) 
            return s;
        vector<string> v(min(numRows, int(s.size())), "");
        int dir=-1,idx=0;
        for(int i=0;i<s.size();i++){
            v[idx]+=s[i];
            idx += dir == -1 ? 1 : -1;
            if (idx == 0 || idx == numRows - 1) 
                dir=-dir;
        }
        
        string str="";
        for (auto i : v) 
            str+=i;

        return str;
    }
};
