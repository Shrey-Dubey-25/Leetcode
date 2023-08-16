#include<iostream>
#include<vector>

using namespace std;
vector<int> getAverages(vector<int>& v, int k) {//2090 leetcode
    int su=0,j;
    vector<int>ans(v.size(),-1);
    if(2*k+1>v.size()){
        return ans;
    }
    for(int j=0;j<2*k+1;j++){
            su+=v[j];
    }
    int x=su/((2*k)+1);
    ans[k]=x;
    j=0;
    
    for(int i=k+1;i<=v.size()-k-1;i++){
        su=su+v[i+k]-v[j];
        j++;
        int x=su/((2*k)+1);
        ans[i]=x;
    }
    
    return ans;
}
int main(){
    vector<int>v{7,4,3,9,1,8,5,2,6};
    int k=3;
    vector<int>ans=getAverages(v,k);
    
}