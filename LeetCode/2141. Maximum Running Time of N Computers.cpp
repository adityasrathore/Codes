class Solution {
public:
    bool isValid(int n, vector<int>& batteries,long long mid){
        long long time = 0;
        for(int i : batteries){
            if(i < mid)
                time += i;
            else
                time += mid;
        }
        return time >= mid*n;
    }
    long long maxRunTime(int n, vector<int>& batteries) {
        long long s = 0,e = 0;
        for(int i : batteries)
            e += i;
        long long ans = 0;
        while(s<=e){
            long long mid = (s + e)/2;
            if(isValid(n,batteries,mid) == true){
                ans = mid;
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
        return ans;
    }
};
