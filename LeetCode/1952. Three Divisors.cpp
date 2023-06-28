class Solution {
public:
    bool isThree(int n) {
        int d = 2;
        for(int i=2;i<n && d<=3; i++)
            if(n%i == 0)
                d++;
        return d == 3;
    }
};
