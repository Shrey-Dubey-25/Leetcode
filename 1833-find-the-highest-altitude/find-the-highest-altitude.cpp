class Solution {
public:
    int largestAltitude(vector<int>& v) {
        v.insert(v.begin(),0);
        for(int i=1;i<v.size();i++){
            v[i]+=v[i-1];
        }
        int m=INT_MIN;
        for(auto i:v){
            m=max(m,i);
        }
        return m;
    }
};