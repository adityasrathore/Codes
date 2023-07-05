https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/discuss/3722847/Q1869-Accepted-C%2B%2B-100-Fast-Two-Pointer-or-Easiest


class Solution {
public:
    bool checkZeroOnes(string s) {
        int n = s.size();
        int lenOne = 0;
        int lenZero = 0;
        int j = -1;
        for(int i=0;i<n;i++){
            if(s[i] == '0')
                j = i;
            lenOne = max(lenOne,i-j);
        }

        j = -1;
        for(int i=0;i<n;i++){
            if(s[i] == '1')
                j = i;
            lenZero = max(lenZero,i-j);
        }
        // cout<<lenOne<<" "<<lenZero<<endl;
        return lenOne>lenZero;
    }
};
