class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& v1, vector<int>& v2) {
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        vector<int>pa;
        vector<vector<int>>a;
        for(int i=0;i<v1.size();i++){
            int s=0,e=v2.size();
            bool check=false;
            while(s<e){
                int m=(s+e)/2;
                if(v2[m]==v1[i]){
                    check=true;
                    break;
                }
                else if(v2[m]<v1[i]){
                    s=m+1;
                }
                else{
                    e=m;
                }
            }
            if(check==false){
                pa.push_back(v1[i]);
            }
        }
        if(pa.size()<1){
            a.push_back(pa);
        }
        else{
            int i=1;
            while(i<pa.size()){
                if(pa[i-1]==pa[i]){
                    pa.erase(pa.begin()+i);
                    continue;
                }
                i++;
            }
            a.push_back(pa);
        }
        pa.clear();
        for(int i=0;i<v2.size();i++){
            int s=0,e=v1.size();
            bool check=false;
            while(s<e){
                int m=(s+e)/2;
                if(v1[m]==v2[i]){
                    check=true;
                    break;
                }
                else if(v1[m]<v2[i]){
                    s=m+1;
                }
                else{
                    e=m;
                }
            }
            if(check==false){
                pa.push_back(v2[i]);
            }
        }
        if(pa.size()<1){
            a.push_back(pa);
        }
        else{
            int i=1;
            while(i<pa.size()){
                if(pa[i-1]==pa[i]){
                    pa.erase(pa.begin()+i);
                    continue;
                }
                i++;
            }
            a.push_back(pa);
        }
        return a;
    }
};