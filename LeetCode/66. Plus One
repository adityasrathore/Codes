class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {  
        int n=digits.size();
        while(true){
            if(digits[n-1]!=9){
                digits[n-1]++;
                return digits;
            }
            else{
                digits[n-1]=0;
                n--;
            }
            if(digits[0]==0){
                digits[0]=1;
                digits.push_back(0);
                return digits;
            }
        }
    }
};
