class Solution {
public:
    int longestSubarray(vector<int>& v) {
        int i=0,j=0,m=0,c=0;
        while(j<v.size()){
            if(v[j]==0){
                c++;
            }
            while(c>1){
                if(v[i]==0){
                    c--;
                }
                i++;
            }
            m=max(m,j-i);
            j++;
        }
        return m;
    }
};