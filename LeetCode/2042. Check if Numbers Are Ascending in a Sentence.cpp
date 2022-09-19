```
class Solution {
public:
    bool areNumbersAscending(string s) {
        int n=s.length();
        vector <int> v;
        for(int i=0;i<n;i++)
            if(s[i]>='0' && s[i]<='9'){
                if(s[i+1]>='0' && s[i+1]<='9'){
                    v.push_back((s[i]-'0')*10+(s[i+1]-'0')); // Check for 2 digit Number
                    i++; // If found, no need to check for next index as it is already covered 
                    continue; // Need to Skip pushback for single Integer as it's 2 digit Number
                }
                v.push_back(s[i]-'0');
            }
        for(int i=1;i<v.size();i++)
            if(v[i-1]>=v[i])
                return false;
        return true;
    }
};
```
