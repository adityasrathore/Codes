class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    int n=heights.size();
    stack <pair <int,int> > s1;
    stack <pair <int,int> > s2;
    vector <int> left(n);
    vector <int> right(n);
    vector <int> area(n);
        
    for(int i=0;i<n;i++){
        if(!s1.empty()&& s1.top().first<heights[i])
            left[i]=s1.top().second;
        while(!s1.empty()&& s1.top().first>=heights[i])
            s1.pop();
        if(s1.empty())
            left[i]=-1;
        else  
            left[i]=s1.top().second;
        
        s1.push(make_pair(heights[i],i));
    }
    for(int i=n-1;i>=0;i--){
        if(!s2.empty()&& s2.top().first<heights[i])
            right[i]=s2.top().second;
        while(!s2.empty()&& s2.top().first>=heights[i])
            s2.pop();
        if(s2.empty())
            right[i]=n;
        else  
            right[i]=s2.top().second;
        
        s2.push(make_pair(heights[i],i));
    }

    for(int i=0;i<n;i++)
        area[i]=heights[i]*(right[i]-left[i]-1);
    
    return *max_element(area.begin(),area.end());
    
    }
};
