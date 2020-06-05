class Solution {
private:
    vector<int> v;
    unordered_map<int,int> m;
public:
    Solution(vector<int>& w) {
        srand(time(NULL));
        int s = 0;
        for (int i = 0; i < w.size(); i ++) {
            s += w[i];
            v.push_back(s);
            m[s] = i;
        }
    }
    
    int pickIndex() {
        return m[*upper_bound(v.begin(), v.end(), rand() % v.back())];
    }
};