class UndergroundSystem {
public:
    unordered_map<int, pair<string, int>> customer;
    unordered_map<string, pair<double, int>> routeInfo;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
       customer[id] = {stationName, t}; 
    }
    
    void checkOut(int id, string stationName, int t) {
       pair route = customer[id];
       string station = route.first + "-" + stationName;
       routeInfo[station].first += t - customer[id].second;
       routeInfo[station].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string stations = startStation + "-" + endStation;
        return routeInfo[stations].first / routeInfo[stations].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */