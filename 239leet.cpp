#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<int> maxSlidingWindow(vector<int>& v, int k) {
    int i=0;
    int j=i+k-1;
    vector<int>ans;
    if(j>=v.size()){
        return {};
    }

    int max=0;
    for(int i=0;i<=j;i++){
        if(v[i]>=v[max]){
            max=i;
        }
    }
    while(j<v.size()){// 1,3,-1,-3,5,3,6,7
        if(j<v.size() && v[j]>=v[max]){
            max=j;
        }
        else{
            if(max>=i && max<=j){
                max=max;
            }
            else{
                for(int x=i;x<=j;x++){
                    if(v[x]>=v[max]){
                        max=x;
                    }
                }
            }
        }
        ans.push_back(v[max]);
        i++;
        j++;
        
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return ans;
}

int main(){
    vector<int>v{1,3,-1,-3,5,3,6,7};
    maxSlidingWindow(v,1);

}