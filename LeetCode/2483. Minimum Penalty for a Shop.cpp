class Solution {
public:
    int bestClosingTime(string customers) {
            int con=0,maxi=0,res=0;
            for(int i=0;i<customers.length();i++)
            {
                if(customers[i]=='Y')
                   con++;
                else
                    con--;
                if(con>maxi){
                    maxi=con;
                    res=i+1;
                }
            }
        return res;
    }
};
