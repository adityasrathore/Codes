class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> maxh;
        for(auto i:stones)
            maxh.push(i);
        while(maxh.size()>0){
            int top1=maxh.top();
            maxh.pop();
            if(maxh.size()==0)
                return top1;
            int top2=maxh.top();
            maxh.pop();
            if(top1!=top2){
                maxh.push(top1-top2);
            }
            else{
                maxh.push(0);
            }
        }
        return maxh.top();
    }
};
