class StockSpanner {
public:
    StockSpanner() {
        
    }
    stack <pair<int,int> > s;
    
    int next(int price) {    
        int t=1;
        while(!s.empty() &&  s.top().first<=price){
            t+=s.top().second;
            s.pop();
        }

        s.push({price,t});
        return t;
        
    }
};
