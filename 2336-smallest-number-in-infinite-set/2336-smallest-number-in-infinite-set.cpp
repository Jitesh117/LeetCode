class SmallestInfiniteSet {
public:set<int>map;
    SmallestInfiniteSet() {
        for(int i = 1;i<=1000;i++)
            map.insert(i);
    }
    
    int popSmallest() {
        int s = *map.begin();
        map.erase(*map.begin());
        return s;
    }
    
    void addBack(int num) {
        map.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */