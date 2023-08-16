#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void trap(vector<int>& h){
    vector<int>l;
    vector<int>r;
    int ans=0;
    int v=h[0];
    
    for(int i=0;i<h.size();i++){
        if(h[i]>v){
            v=h[i];
        }
        l.push_back(v);
    }
    v=h[h.size()-1];
    
    for(int i=h.size()-1;i>=0;i--){
        if(h[i]>v){
            v=h[i];
        }
        r.push_back(v);
    }
    reverse(r.begin(),r.end());

    for(int i=0;i<h.size();i++){
        ans+=min(l[i],r[i])-h[i];
    }
    cout<<ans<<endl;
    return ;
}

int main(){
    int n;
    cin>>n;
    while(n>0){
        int s;
        vector<int>h;
        cin>>s;
        for(int i=0;i<s;i++){
            int ele;
            cin>>ele;
            h.push_back(ele);
        }
        trap(h);
        n--;
    }
}
