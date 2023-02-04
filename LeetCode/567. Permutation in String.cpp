class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> v1(26,0),v2(26,0); // To store frequency
        int m=s1.size();
        int n=s2.size();
        if(m>n)
            return false; // Impossible Case
        int right=0,left=0;
        for(int i=0;i<m;i++){ //Till the length of s1 whose permutation is to be checked
            v1[s1[right]-'a']+=1;
            v2[s2[right]-'a']+=1;
            right++;
        }
        right--;
        for(int i=right;i<n;i++){
            if(v1==v2){ // Found Permutation
                return true;
            }
            right++;
            if(right<n)
                v2[s2[right]-'a']+=1; // Adding new frequency to the sliding window
            
            v2[s2[left]-'a']-=1; // Removing the previous frequency outside the window
            left++; // Moving the window forward till the end
        }
        return false;
    }
};
