class Solution {
public:
    void sortColors(vector<int>& v) {
        int i=0,j=0,k=v.size()-1;
        while(i<=k){
            if(v[i]==0){
                swap(v[i],v[j]);
                j++;
                i++;
            }
            else if(v[i]==2){
                swap(v[i],v[k]);
                k--;
            }
            else{
                i++;
            }
        } 

    }
};