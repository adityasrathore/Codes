class Solution {
public:
    int maxLength = -1;
    void getcycle(vector<int> &edges,int s,vector<bool>& visit,vector<int>& store){
        if(s == -1)
            return ;
        if(visit[s]){
            int count = -1;
            for(int i =0;i<store.size();i++){
                if(store[i]==s){
                    count = i;
                    break;
                } 
            }
            if(count==-1)return;
            int size = (store.size()-count);
            maxLength = max(maxLength,size);
            return ;
        }
        visit[s] = true;
        store.push_back(s);
        getcycle(edges,edges[s],visit,store);
        return;
    }
    int longestCycle(vector<int>& edges) {
        vector<bool> visit(edges.size(),0);
        for(int i =0;i<edges.size();i++){
            if(visit[i])continue;
            vector<int> store;
            getcycle(edges,i,visit,store);
     
        }
        return maxLength;
    }
};
