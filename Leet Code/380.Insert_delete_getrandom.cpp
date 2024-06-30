class RandomizedSet {
private: 
    set<int> s;
public:

    RandomizedSet() {
    }
    
    bool insert(int val) {
        auto pos = s.find(val);
        if(pos != s.end()){
            return false;
        } else {
            s.insert(val);
            return true;
        }
    }
    
    bool remove(int val) {  
        auto pos = s.find(val);
        if(pos != s.end()){
            s.erase(pos);
            return true;
        } else{
            return false;
        }
    }
    
    int getRandom() {
        int size = s.size();
        int randIndex = rand() % size;
        auto it = next(s.begin(), randIndex);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */