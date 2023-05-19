class Solution {
public:
    string defangIPaddr(string address) {
        string s="";
        int n=address.size();
        for(int i=0;i<n;i++){
            if(address[i]!='.')
                s+=address[i];
            else{
                s+="[.]";
                if(i==n-1)
                    s+=address[i];
            }
        }
        return s;
    }
};
