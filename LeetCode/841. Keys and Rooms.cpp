class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        //Aditya ab graph karega BC
        int n = size(rooms);
        vector<bool>visited(n, false);
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int roomIdx = q.front(); 
            q.pop();
            visited[roomIdx] = true;
            for(auto adjRoom : rooms[roomIdx])
                if(!visited[adjRoom]) 
                    q.push(adjRoom);
        }
        for(auto v : visited) 
            if(v==false)
                return false; 
        return true;
    }
};
