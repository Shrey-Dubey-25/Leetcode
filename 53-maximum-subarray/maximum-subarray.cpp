class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int m=v[0],i=0,s=0;
        while(i<v.size()){
            s+=v[i];
            if(s>m){
                m=s;
            }
            if(s<0){
                s=0;
                i++;
                continue;
            }
            
            i++;
        }   
        return m;
    }
};