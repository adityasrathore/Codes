class Solution {
public:    
    int minCost(string s, vector<int>& cost) {
        stack<pair<char,int>> stack;
        int n=s.size(), result=0;
        
        for(int i=0; i<n; i++){
            if(!stack.empty() && stack.top().first==s[i]){
                if(stack.top().second<cost[i]){
                    result+=stack.top().second;
                    stack.pop();
                    stack.push({s[i], cost[i]});
                }
                else{
                    result+=cost[i];
                }
            }
            else{
                stack.push({s[i], cost[i]});
            }
        }
        
        return result;
    }
};
