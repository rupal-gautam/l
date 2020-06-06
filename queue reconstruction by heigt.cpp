class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
        
if(p.size()==0){return p;}
vector<vector<int>> v;
sort(p.begin(), p.end(),
[](const vector<int>& a, const vector<int>& b) {
if(a[0]==b[0]){
return a[1]<b[1];
}
return a[0] > b[0];
});
v.push_back(p[0]);
for(int i = 1; i<p.size(); i++){
int f = p[i][1];
if(f>p.size()){
v.push_back(p[i]);
}
else{
v.insert(v.begin()+f,p[i]);
}
}
return v;

    }
};