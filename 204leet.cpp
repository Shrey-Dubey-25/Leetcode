#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int countPrimes(int n) {
    if(n<=1){return 0;}
    int cou=0;
    vector<bool>c(n,true);
    c[0]=c[1]=false;
    for(int i=2;i<n;i++){
        if(c[i]){
            cou++;
            int j=i+i;
            while(j<n){
                c[j]=false;
                j+=i;
            }
        }
    }
    return cou;
}
int main(){
    cout<<countPrimes(10);
}