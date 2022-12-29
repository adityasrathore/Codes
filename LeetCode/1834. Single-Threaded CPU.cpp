class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        priority_queue <pair<int,int>,vector<pair<int,int>>,greater <pair<int,int>>> minh;
        vector <int> v;
        int n=tasks.size();
        for(int i=0;i<n;i++){
            tasks[i].push_back(i);
        }
        sort(tasks.begin(),tasks.end());
        int i=0;
        long time=tasks[0][0];
        while(minh.size() || i<n){
            while(i<n && time>=tasks[i][0]){
                minh.push({tasks[i][1],tasks[i][2]}); //Execution time & Index into Min-Heap
                i++;
            }
                
            if(minh.empty())
                time=tasks[i][0]; //If the CPU is idle then takes the task 
            else{
                pair <int,int> temp=minh.top(); //Busy CPU then takes the task according to min-sort of time
                minh.pop();
                v.push_back(temp.second);
                time+=temp.first;
            }
        }
        return v;
    }
};
CRUX
-Use long for the accumulation of time as the values are extremely large and will result in overflow.
-Humble Request to give it a try on pen and paper. This is a very interesting question.
1)Added Index i.e A third term to given vector
2)Then according to time frame we move forward. In case of clash and ongoing task the time of Exec. & Index is inserted into the heap
3)Heap sorts the minimum automatically and least time taking task is executed.
4)Meanwhile, Push the indexs that have been executed.
