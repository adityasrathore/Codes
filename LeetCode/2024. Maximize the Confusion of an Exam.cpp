class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int maxT = 0,maxF = 0;
        int temp = k;
        int j = 0;
        for(int i=0;i<n;i++){
            if(answerKey[i] == 'F')
                k--;
            while(k<0){
                if(answerKey[j] == 'F')
                    k++;
                j++;
            }
            maxT = max(maxT,i-j+1);
        }
        k = temp;
        j = 0;
        for(int i=0;i<n;i++){
            if(answerKey[i] == 'T')
                k--;
            while(k<0){
                if(answerKey[j] == 'T')
                    k++;
                j++;
            }
            maxF = max(maxF,i-j+1);
        }
        return max(maxT,maxF);
    }
};
