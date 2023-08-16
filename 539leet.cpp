#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int findMinDifference(vector<string>& tp) {
    vector<int>minu;
    for(auto i:tp){
        int hr=stoi(i.substr(0,2));
        int mi=stoi(i.substr(3,2));
        int total=hr*60+mi;
        minu.push_back(total);
    }
    sort(minu.begin(),minu.end());
    int dif=INT_MAX;
    for(int i=0;i<minu.size();i++){
        dif=min(minu[i+1]-minu[i],dif);
    }
    return dif;

}

int main(){
    vector<string>tp{"23:59","00:00"};


}