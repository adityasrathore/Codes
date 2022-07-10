class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int a=0;
        for(int i=0;i<n;i++){
            if(operations[i].at(1)=='+')
                a++;
            else
                a--;
        }
        return a;
    }
};
