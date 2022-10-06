class TimeMap {
public:
    
    TimeMap(){
        
    }
    
    void set(string key, string value, int timestamp) {
        data[key][timestamp] = value;
    } 
    
    string get(string key, int timestamp) {
        auto it1 = data.find(key);
        if (it1 != data.end()) {
            auto it2 = it1->second.lower_bound(timestamp);    
            if (it2 != it1->second.end()) {
                return it2->second;
            }
        }
        return "";
    }
    
    unordered_map<string, map<int, string, greater<int> >> data;
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */