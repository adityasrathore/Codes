class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map <int,int> mp;
        for(auto i:tasks)
            mp[i]++;
        int count=0;
        for(auto i:mp){
            int f=i.second;
            if(f==1)
                return -1;
            else{
                while(f>0){
                    if(f==2 || f==3){
                        count++;
                        break;
                    }
                    else if((f-3)%2==0 || (f-3)%3==0){
                        f=f-3;
                        count++;
                    }
                    else if((f-2)%2==0 || (f-2)%3==0){
                        f=f-2;
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
