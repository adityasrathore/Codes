class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int maxCount=0;
        
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<sentences[i].size();j++)
                if(sentences[i].at(j)==' ')
                  count++;
            maxCount=max(maxCount,count);
        }
        return maxCount+1;
    }
};
