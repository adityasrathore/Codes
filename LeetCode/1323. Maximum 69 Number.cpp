class Solution {
public:
    int maximum69Number (int num) {
        vector<int> v;
        while(num > 0){
            v.push_back(num%10);
            num/=10;
        }

        for(int i=v.size()-1;i>=0;i--){
            if(v[i] == 6){
                v[i] = 9;
                break;
            }
        }
        int ans = 0;
        for(int i=v.size()-1;i>=0;i--){
            ans += v[i]*pow(10,i);
        }
        return ans;
    }
};
