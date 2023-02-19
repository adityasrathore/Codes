class Solution
{
	public:
	    void solve(string &ans,vector<string> &v,string s,int n,vector<int> &freq){
	        if(ans.size()==n){
	            v.push_back(ans);
	            return;
	        }
	        for(int i=0;i<n;i++){
	            if(freq[i]==0){
	                ans+=s[i];
	                freq[i]=1;
	                solve(ans,v,s,n,freq);
	                freq[i]=0;
	                ans.pop_back();
	            }
	        }
	    }
		vector<string>find_permutation(string s){
		    int n=s.size();
		    string ans="";
		    vector <string> v;
		    vector <int> freq(n,0);
		    solve(ans,v,s,n,freq);
		    
		    set <string> temp;
		    for(auto i:v)
		        temp.insert(i);
		    v.clear();
		    for(auto i:temp)
		        v.push_back(i);
		    sort(v.begin(),v.end());
		    return v;
		}
};
