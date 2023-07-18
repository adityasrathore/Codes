class LRUCache {
public:
    
    list<pair<int, int>> cache;
    unordered_map<int, list<pair<int,int>> :: iterator> myMap;
    int maxSize; // max Capacity
    
    void refreshPosition(int key, int value) {
        
        cache.erase(myMap[key]);
        cache.push_front(make_pair(key, value));
        myMap[key] = cache.begin();
        
    }
   
    LRUCache(int capacity) {
        maxSize = capacity;
    }
    int get(int key) {
        if(myMap.find(key) != myMap.end()) {
            int value = (*myMap[key]).second;
            refreshPosition(key, value);
            return value;
        }
        return -1; 
    }
    void put(int key, int value) {
        if(myMap.find(key) != myMap.end())
            refreshPosition(key, value); 
        else {
            cache.push_front(make_pair(key, value));
            myMap[key] = cache.begin();
            
            if(myMap.size() > maxSize) {
                myMap.erase(cache.back().first);
                cache.pop_back();
            }
        }
    }
    
};
