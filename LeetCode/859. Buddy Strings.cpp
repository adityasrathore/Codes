class Solution {
public:
    bool buddyStrings(string s, string goal) {
        set <char> temp(s.begin(),s.end());
        int n=s.size();
        int m=goal.size();
        if(s==goal)
            return temp.size()<n; //Check Repetative Terms to provide SWAP
        if(m!=n)
            return false;
        int i=0;
        int j=n-1;
        while(i<n && s[i]==goal[i]) // Getting the first break point from Right
            i++;
        while(j>=0 && s[j]==goal[j]) // Getting the first break point from Left
            j--;
        if(i<j)
            swap(s[i],s[j]); // Checking the SWAP
        return s==goal; // If string s & goal is to be equal it would be in one swap
    }
};
