class MyHashMap {
public:
    vector<pair<int, int>> mapp;
    MyHashMap() {}

    void put(int key, int value) {
        auto it = mapp.end();

        for (auto current = mapp.begin(); current != mapp.end(); ++current) {
            if (current->first == key) {
                current->second = value;
                return;
            }
        }

        mapp.push_back({key, value});
    }

    int get(int key) {
        auto it = mapp.end();

        for (auto a = mapp.begin(); a < mapp.end(); ++a) {
            if (a->first == key) {
                return a->second;
            }
        }
        return -1;
    }

    void remove(int key) {
        auto it = mapp.end();

        for (auto a = mapp.begin(); a < mapp.end(); ++a) {
            if (a->first == key) {
                mapp.erase(a);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */