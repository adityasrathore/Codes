class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        set <char> temp(s.begin(),s.end());
        int n=s.size();
        int m=goal.size();
        if(s==goal)
            return temp.size()<n;
        if(m!=n)
            return false;
        int i=0;
        int j=n-1;
        while(i<n && s[i]==goal[i])
            i++;
        while(j>=0 && s[j]==goal[j])
            j--;
        if(i<j)
            swap(s[i],s[j]);
        return s==goal;
    }
};
