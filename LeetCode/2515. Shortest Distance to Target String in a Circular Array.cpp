class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int t=n-1;
        int ansIdx=INT_MAX;
        int i=startIndex;
        int count=0;
        while(t--){
            count++;
            if(words[(i)%n]==target){ //We go towards right untill the target isn't found
                ansIdx=count-1;
                break;
            }
            i++;    
        }
        t=n-1;
        i=startIndex;
        count=0;
        while(t--){
            count++;
            if(words[(i+n)%n]==target){
                ansIdx=min(ansIdx,count-1); //We go towards left untill the target isn't found
                break;
            }
            i--;
        }
         cout<<ansIdx<<endl;
        return ansIdx!=INT_MAX?ansIdx:-1;
    }
};
