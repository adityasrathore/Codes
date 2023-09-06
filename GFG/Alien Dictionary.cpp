class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        vector<int> adj[K];
        for(int i=0;i<N-1;i++){
            string a = dict[i];
            string b = dict[i+1];
            int len = min(a.size(),b.size());
            for(int k=0;k<len;k++){
                if(a[k] != b[k]){
                    adj[a[k]-'a'].push_back(b[k]-'a');
                    break;
                }
            }
        }
        queue<int> q;
        string ans = "";
        vector<int> inDeg(K,0);
        for(int i=0;i<K;i++){
            for(auto j:adj[i]){
                inDeg[j]++;
            }
        }
        for(int i=0;i<K;i++){
            if(inDeg[i] == 0){
                q.push(i);
            }
        }      
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans +=  char(node + 'a');
            for(auto i : adj[node]){
                inDeg[i]--;
                if(inDeg[i] == 0)
                    q.push(i);
            }
        }
        // cout<<ans<<endl;
        return ans;
    }
};
