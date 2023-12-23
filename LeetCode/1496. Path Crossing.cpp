class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0,y=0;
        set <pair<int,int>> s;
        s.insert({x,y});
        for(char i: path){
            if(i=='N')
                y++;
            else if(i=='S')
                y--;
            else if(i=='E')
                x++;
            else
                x--;
            if(s.find({x,y})!=s.end())
                return true;
            s.insert({x,y});
        }
        return false;
    }
};

1496. Path Crossing
