class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> s;
        set<int> t;
        for (int i : arr) {
            set<int> r;
            r.insert(i);
            for (int j : t) r.insert(i | j);
            t = r;
            for (int j : t) s.insert(j);
        }
        return s.size();
    }
};