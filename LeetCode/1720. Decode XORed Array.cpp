class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector <int> v{first};
        for(int i:encoded){
            v.push_back(first^=i);
        }
        return v;
    }
};
