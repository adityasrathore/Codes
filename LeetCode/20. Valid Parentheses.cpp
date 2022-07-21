class Solution {
public:
    bool isValid(string s) {
        stack <char> v;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                v.push(s[i]);
            else{
                if(v.empty())
                    return false;
                if(s[i]==')' && v.top()!='(')
                    return false;
                if(s[i]=='}' && v.top()!='{')
                    return false;
                if(s[i]==']' && v.top()!='[')
                    return false;
                v.pop();
            }
        }
        if(v.empty())
            return true;
        else
            return false;
    }
};
