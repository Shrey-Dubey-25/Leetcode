#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int minSubArrayLen(int t, vector<int>& v) {
    int sum=0,len=INT_MAX,i=0,j=0;
    sum+=v[0];
    while(i<v.size()-1){
        if(sum==t){
            len=min(len,i-j);
        }
        else if(sum>t and j<=i){
            while(j<=i){
                sum-=v[j];
                if(sum==t){
                    len=min(len,i-j);
                }
                j++;
            }
        }
        sum+=v[++i];
        
    }
    if(sum==t){
        len=min(len,i-j+1);
    }
    
    return (len==INT_MAX)?0:len;
}
int main(){
    vector<int>v{1,1,1,1,1,1,1,1};
    int t=11;
    cout<<minSubArrayLen(t,v);
    

}