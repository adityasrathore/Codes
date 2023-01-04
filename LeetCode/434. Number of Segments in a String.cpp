class Solution {
public:
    int countSegments(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){ // If it's not a space then we move forward
                while(i<n && s[i]!=' '){ // Keep in min we don't exceed the string length ' i<n '
                    i++; // While space isn't encountered thus we increment one, If space is present while breaks.
                }
                count++; // We get one instance of word when while breaks thus we in increment count;
            }
        }
        return count;
    }
};
