class Solution {
public:
    int maxOperations(vector<int>& v, int t) {
        if(v.size()<=1){
            return 0;
        }
        sort(v.begin(),v.end());
        int i=0,j=v.size()-1,n=0;
        while(i<j){
            int s=v[i]+v[j];
            if(s==t){
                i++;
                j--;
                n++;
            }
            else if(s>t){
                j--;
            }
            else{
                i++;
            }
        }
        return n;
}
};