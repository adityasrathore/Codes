class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        int max=*max_element(salary.begin(),salary.end());
        int min=*min_element(salary.begin(),salary.end());
        long long tot= accumulate(salary.begin(),salary.end(),0);
        return 1.0*(tot-max-min)/(n-2);
    }
};
