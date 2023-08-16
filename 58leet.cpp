#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int lengthOfLastWord(string s) {
    int end=s.length()-1;
    string ans="";
    
    while(s[end]==' ' && end>=0){
        s.pop_back();
        end--;
    }

    int e=s.length()-1;
    while(e>=0){
        if(s[e]!=' '){
            ans.push_back(s[e]);
        }
        else{
            break;
        }
        e--;
    }   
    return ans.length();
    
}

int main(){
    string s="Hello World         ";
    lengthOfLastWord(s);
}