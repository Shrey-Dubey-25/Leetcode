#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int helper(int arr[],int n,int v,int i){
    int step=0;
    int cl=v;
    while(i<n || v<0){
        if(v==0){
            return step;
        }
        if(arr[i]<=v){
            step+=v/arr[i];
            v=v%arr[i];
        }
        else{
            i++;
        }
    }
    return -1;   
}

int minCoins(int arr[], int n, int v){
    sort(arr,arr+n,[](int a,int b){
        return a>b;
    });
    vector<int>ans;
    
    for(int i=0;i<n;i++){
        int g=helper(arr,n,v,i);
        if(g!=-1){
            ans.push_back(g);
        }
    }
    int min=INT_MAX;
    for(auto i:ans){
        if(i<min){
            min=i;
        }
    }
    if(ans.size()==0){
        return -1;
    }
    else{
        return min;
    }

    
} 

int main(){
    int arr[]={9, 6, 5, 1};
    int v=11,n=4;
    cout<<minCoins(arr,n,v);

}


