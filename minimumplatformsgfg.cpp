#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int findPlatform(int arr[], int dep[], int n){
    sort(arr,arr+n);
    sort(dep,dep+n);
    int plat=1,max=1;
    int i=1,j=0;
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            plat++;
            i++;
        }
        else if(arr[i]>dep[j]){
            plat--;
            j++;
        }
        if(plat>max){
            max=plat;
        }
    }
    return max;
    
}

int main(){
    int arr[]={0, 1100, 1200};
    int dep[]={1300, 1200, 1325};
    cout<<findPlatform(arr,dep,3);
    
}