class Solution {
public:
    int countDigits(int num) {
        int t=num; // Making a copy
        int count=0;
        while(t>0){ 
            int x=t%10; //Ex- 256 , We get 6 , Used to find the last digit
            if(num%x==0) // If the digit divides the number the we increment count  
                count++;
            t=t/10; // Ex- 256 , We get 25 , Divide by 10 to move forward with traversal 
        }
        return count; //Returing the answer
    }
};
