#include<iostream>
#include<vector>
#include<bits/stdc++.h>


using namespace std;
string convert(string s){
    string ans="";
    for(char i:s){
        if(i>=65 && i<=90){
            
            ans+=tolower(i);
        }
        else if(i>=97&& i<=122){
            ans+=i;
        }
        else if(i>=48 && i<=57){
            ans+=i;
        }
    }
    return ans;
    
}

bool isPalindrome(string s) {
    string ans=convert(s);
    int i=0,j=ans.length()-1;
    while(i<=j){
        if(ans[i]!=ans[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    string s=" ";
    cout<<isPalindrome(s);
    
}