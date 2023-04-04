class Solution {
public:
    int partitionString(string s) {
        int n=s.size();
        int count=1;
        set <char> v;
        for(int i=0;i<n;i++){
            if(v.find(s[i])!=v.end()){
                v.clear();
                count++;
            }
            v.insert(s[i]);
        }
        return count;
    }
};
