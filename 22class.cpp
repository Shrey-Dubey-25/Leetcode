#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int sum(int n,int su){
    if(n<0){
        return ;
    }
    su+=n%10;
}
int main(){
    string s;
    cin>>s;
    int su=0;
    long long n=stoi(s);
    cout<<n<<endl;
    while(n>0){
        su+=n%10;
        n/=10;
    }
    
}
