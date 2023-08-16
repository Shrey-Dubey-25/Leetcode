#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

struct Job 
{ 
    int id;	  
    int dead;  
    int profit;  
};

vector<int> JobScheduling(Job arr[], int n) {
    sort(arr,arr+n,[](Job a,Job b){
        return a.profit>b.profit;
    });
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i].dead>max){
            max=arr[i].dead;
        }
    }
    vector<int>v(max+1,-1);
    int s=0,c=0;
    for(int i=0;i<n;i++){
        if(v[arr[i].dead]==-1){
            v[arr[i].dead]=arr[i].id;
            s+=arr[i].profit;
            c++;
        }
        else{
            int j=arr[i].dead;
            while(j>0){
                if(v[j]==-1){
                    break;
                }
                j--;
            }
            if(j>0){
                v[j]=arr[i].id;
                s+=arr[i].profit;
                c++;
            }
        }
    }
    return {c,s};
}
int main(){
    int n = 8;
    Job arr[]={{6,2,80},{3,6,70},{4,6,65},{2,5,60},{5,4,25},{8,2,22},{1,4,20},{7,2,10}};
    JobScheduling(arr, n);
    return 0;
}
