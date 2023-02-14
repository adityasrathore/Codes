class Solution {
public:
    string addBinary(string a, string b) {
        int m=a.size();
        int n=b.size();
        int i=0,carry=0;
        string s="";
        while(i<m || i<n || carry==1){
            int tempA=0,tempB=0;
            if(i<m && a[m-i-1]=='1')
                tempA=1;
            if(i<n && b[n-i-1]=='1')
                tempB=1;
            s=to_string((tempA+tempB+carry)%2)+s;
            carry=(tempA+tempB+carry)/2;
            i++;
        }
        return s;
    }
};
