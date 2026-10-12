class MyHashSet {
public:
    vector<int> st;
    MyHashSet() {}

    void add(int key) {
        auto it = find(st.begin(), st.end(), key);
        if (it == st.end())
            st.push_back(key);
    }

    void remove(int key) {
        auto it = find(st.begin(), st.end(), key);
        if (it != st.end())
            st.erase(it);
    }

    bool contains(int key) {
        return find(st.begin(), st.end(), key) != st.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */