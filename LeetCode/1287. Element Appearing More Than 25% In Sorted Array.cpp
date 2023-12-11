class Solution {
public:
	int findSpecialInteger(vector<int>& arr) {
		unordered_map<int, int> mp;
		for(int i = 0; i < arr.size(); i++)
			mp[arr[i]]++;
		
		for(auto i : mp)
			if(i.second > arr.size() / 4)
				return i.first;
			
		
		return arr[0];
	}
};
