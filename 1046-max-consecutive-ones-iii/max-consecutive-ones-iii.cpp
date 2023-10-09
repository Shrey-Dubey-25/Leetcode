class Solution {
public:
    int longestOnes(vector<int>& v, int k) {
        int i=0,j=0,m=0,c=0;
        while(j<v.size()){
            if(v[j]==0){
                c++;
            }
            while(c>k){
                if(v[i]==0){
                    c--;
                }
                i++;
            }
            m=max(m,j-i+1);
            j++;
        }
        return m;
    }
};