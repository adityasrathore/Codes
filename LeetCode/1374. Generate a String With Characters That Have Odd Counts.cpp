class Solution {
public:
    string generateTheString(int n) {
        string s="";
        if(n%2==1){
            while(n--){
                s+='a';
            }
        }
        else{
            while(n--){
                if(n==0){
                    s+='b';
                    break;
                }
                s+='a';
            }
        }
        return s;
    }
};
