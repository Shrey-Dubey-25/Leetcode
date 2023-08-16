#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int maxMeetings(int start[], int end[], int n){
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++){
        p.push_back({start[i],end[i]});
    }
    sort(p.begin(),p.end(),[](pair<int,int> a,pair<int,int> b){
        return a.second<b.second;
    });
    int c=1;
    int prev=0;
    for(int i=0;i<n;i++){
            if(p[i].first>p[prev].second){
                c++;
                prev=i;
            }
        }
    return c;
}

int main(){
    int st[] = {1,3,0,5,8,5};
    int en[] =   {2,4,6,7,9,9};
    cout<<maxMeetings(st,en,6);
}