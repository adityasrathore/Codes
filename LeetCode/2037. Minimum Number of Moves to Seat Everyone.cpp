class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size();
        sort(students.begin(),students.end());
        sort(seats.begin(),seats.end());
        int minMoves = 0;
        
        for(int i=0;i<n;i++){
            minMoves+=abs(students[i]-seats[i]);
        }
        return minMoves;
    }
};
