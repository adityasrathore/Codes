public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minIdx=min_element(nums.begin(),nums.end())-nums.begin();
        int maxIdx=max_element(nums.begin(),nums.end())-nums.begin();
        //3 Cases
        return min(max(minIdx,maxIdx)+1,
                    min(n-min(minIdx,maxIdx), 
                    min(minIdx,maxIdx)+1+n-max(minIdx,maxIdx)));
    }
};
