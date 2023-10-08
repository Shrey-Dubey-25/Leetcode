class Solution {
public:
    int maxProfit(vector<int>& p) {
        int max=INT_MIN,i=0,minsofar=0;
        while(i<p.size()){
            if(p[i]<p[minsofar]){
                minsofar=i;
            }
            int d=p[i]-p[minsofar];
            if(d>max){
                max=d;
            }
            i++;
        }
        return max;
    }
};