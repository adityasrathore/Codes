class Solution {
public:
    int M = 1e9 + 7;

    int countNicePairs(vector<int>& a) {
        unordered_map<int, int>m;
        int n = a.size();
        for (int i = 0; i < n; i++)
        {
            a[i] -= rev(a[i]);
            m[a[i]]++;
        }
        int ans = 0;
        for (auto i : m)
        {
            ans = ans + ((((long)(i.second) * (long)(i.second - 1)) / 2) % M);
        }
        return ans % M;
    }

    int rev(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum = (sum * 10) + (n % 10);
            n = n / 10;
        }
        return sum;
    }
};
