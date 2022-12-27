class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map <char,int> mp1;
        map <int,int> mp2;
        for(auto i:word)
            mp1[i]++;

        for(auto i:mp1)
            mp2[i.second]++;
        
        if(mp2.size()>2)
            return false;
        
        map<int, int>::iterator it1 = mp2.begin();
        if(mp2.size()==1){
            if(mp1.size()==1 || it1->first==1) // Ex. aa || abc return true
                return true;
            return false; // Ex. aabbcc return false
        }
        map<int, int>::iterator it2 = mp2.begin();
        it2++;
        if(mp2.size()==2){
            if(it1->second==1 && it1->first==1) //One Freq and One Item
                return true;
            if(it1->first==it2->first-1 && it2->second==1)
                return true;
        }
        
        return false;
    }
};
