vector<int> breakingRecords(vector<int> scores) {
       vector<int>ans(2,0);
    int max=scores[0];
    int min=scores[0];
    for(int i=0;i<scores.size();i++){
        if(scores[i]<min){
            min=scores[i];
            ans[1]++;
        }
        if(scores[i]>max){
            max=scores[i];
            ans[0]++;
        }
    }
    return ans;
}
