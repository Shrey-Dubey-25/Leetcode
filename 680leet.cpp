#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

bool check(string s,int i,int j){
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}

bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return check(s,i+1,j)||check(s,i,j-1);
            }
        }
        return true;
}

int main(){
    string s="aba";
    cout<<validPalindrome(s);
}