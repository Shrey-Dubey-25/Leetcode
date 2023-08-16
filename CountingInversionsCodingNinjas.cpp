#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

long long getInversions(long long *v, int n){
    long long c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                c++;
            }
        }
    }
    return c;
}
//optimal find krle bsdk
int main(){
    long long arr[]={2 ,5 ,1, 3, 4};
    getInversions(arr,(sizeof(arr)/sizeof(arr[0])));
}