class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int>> minh;
    SeatManager(int n) {
        for(int i = 1; i <= n; i++) 
            minh.push(i);
    }
    
    int reserve() {
        int top = minh.top(); minh.pop();
        return top;
    }
    
    void unreserve(int seatNumber) {
        minh.push(seatNumber);
    }
};
