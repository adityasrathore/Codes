class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n=piles.size();
        priority_queue <int> maxh;
        for(int i=0;i<n;i++)
            maxh.push(piles[i]);
        for(int i=0;i<k;i++){
            int temp=maxh.top();
            maxh.pop();
            temp-=temp/2;
            maxh.push(temp);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=maxh.top();
            maxh.pop();
        }
        return sum;
    }
};
