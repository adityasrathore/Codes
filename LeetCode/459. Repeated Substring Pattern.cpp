class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int i=n/2;i>=1;i--){
            if(n%i == 0){
                string temp = s.substr(0,i);
                string tempRep = "";
                for(int j=0;j<n/i;j++)
                    tempRep += temp;
                if(tempRep == s)
                    return true;
            }
        }
        return false;
    }
};
