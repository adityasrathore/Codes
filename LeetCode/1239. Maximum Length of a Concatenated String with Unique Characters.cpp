class Solution {
public:
    int ans=0;
    bool isunique(string &s){
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++){
            if(v[s[i]-'a']==1)
                return false;
            v[s[i]-'a']++;
        }
        return true;
    }
    void solve(vector<string>& arr,int idx,string str){
        if(!isunique(str))
            return;
        int temp=str.size();
        ans=max(ans,temp);
        if(idx>=arr.size())
            return;
        
        solve(arr,idx+1,str+arr[idx]);
        solve(arr,idx+1,str);
            
    }
    int maxLength(vector<string>& arr){
        solve(arr,0,"");
        return ans;
        
    }
};
