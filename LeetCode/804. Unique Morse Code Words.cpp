class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector <string> v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set <string> mp;
        for(auto i:words){
            string s="";
            for(char j: i){
                s+=v[j-'a'];
            }
            mp.insert(s);
        }
        return mp.size();
    }
};
