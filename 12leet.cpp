#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;


string intToRoman(int num) {
    string s[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int v[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string ans;
    int i=0;
    while(num>0){
        while(num>=v[i]){
            num=num-v[i];
            ans+=s[i];
        }
        i++;
    }
    return ans;
}

int main(){
    cout<<intToRoman(1994);
}