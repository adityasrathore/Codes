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



class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> ngr(n);
        vector<int> ngl(n);
        stack<pair<int,int>> s;
        // Next Smaller Right
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && s.top().first >= heights[i])
                s.pop();
            if(s.empty())
                ngr[i] = n;
            else
                ngr[i] = s.top().second;
            
            s.push({heights[i],i});
        }
        
        //Empty the stack
        while(s.size()>0)
            s.pop();
        
        // Next Smaller Left
        for(int i=0;i<n;i++){
            while(!s.empty() && s.top().first >= heights[i])
                s.pop();
            if(s.empty())
                ngl[i] = -1;
            else
                ngl[i] = s.top().second;
            
            s.push({heights[i],i});
        }
        // Calculating the Width 
        vector<int> width(n);
        for(int i=0;i<n;i++)
            width[i] = ngr[i]-ngl[i]-1;
        
        // Finding the Maximum Area that is possible
        vector<int> area(n);
        int maxArea=0;
        for(int i=0;i<n;i++){
            area[i] = heights[i]*width[i];
            maxArea = max(maxArea,area[i]);
        }
        
        return maxArea;
    }
};
