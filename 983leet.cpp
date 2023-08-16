#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int recur(vector<int>&d,vector<int>&c,int n){
    //base case
    if(n>=d.size()){
        return 0;
    }
    //for 1-day
    int cost1=c[0]+recur(d,c,n+1);
    
    //for 7-days
    int dday=d[n]+6;
    int m=n;
    while(d[m]<=dday){
        m++;
    }

    int cost2=c[1]+recur(d,c,m);

    //for 30-days
    dday=d[n]+29;
    m=n;
    while(d[m]<=dday){
        m++;
    }
    int cost3=c[2]+recur(d,c,m);
    
    return min(cost1,min(cost2,cost3));

}

int mincostTickets(vector<int>& days, vector<int>& cost) {
    return recur(days,cost,0); 
}

int main(){
    vector<int>days{1,4,6,7,8,20};
    vector<int>cost{2,7,15};
    cout<<mincostTickets(days,cost);

}