class Solution {
public:
    bool isSubsequence(string s, string t) {
int a = 0, b = 0;
        while(b <= t.length()){
            if(a == s.length()){ return true;}
            if(s[a] == t[b]){ a++;}
            b++;
        }
        return false;
    }
};