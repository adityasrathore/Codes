We need to find the maximum and minimum weights [Acc. to the criteria] and return the difference.
Point to observe, the element left and right to the partition would always be included.
Example: 1 2 3 4 5 6 7 8 9 , k =3 1 2 3 | 4 5 6 7 | 8 9 , (1+3) + (4+7) + (8+9). Notice that start and end would always be the part of maxSum and minSum, therefore it will not create differentiation in the answer.
But consider the above sum as (3+4) + (7+8) its the sum of sonsecutive terms.
Put them into maxHeap and minHeap and calculate the sum till (k-1).

class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        priority_queue <int> maxh;
        priority_queue <int,vector<int>,greater<int>> minh;
        for(int i=1;i<n;i++){
            maxh.push(weights[i]+weights[i-1]);
            minh.push(weights[i]+weights[i-1]);
        }
        long long maxSum = 0;
        long long minSum = 0;
        k--;
        while(k--){
            maxSum += maxh.top();
            maxh.pop();
            minSum +=minh.top();
            minh.pop();
        }
        return maxSum - minSum;
    }
};
