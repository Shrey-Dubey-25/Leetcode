class Solution {
public:
    int pivotIndex(vector<int>& v) {
        int ts=0,ls=0;
        for(auto i:v){
            ts+=i;
        }
        //for zero
        int l=0;
        int r=ts-v[0];
        if(l==r){
            return 0;
        }

        //for others
        for(int i=1;i<v.size();i++){//28
            ls+=v[i-1];
            int rs=ts-ls-v[i];
            if(ls==rs){
                return i;
            }
        }
        return -1;
    }
};