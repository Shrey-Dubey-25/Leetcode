#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
string removeOccurrences(string a, string b) {
    int i=0;
    while(i<a.length()){
        if(a.find(b)!=string::npos){
            a.erase(a.find(b),b.length());
        }
        i++;
    }
    return a;
}
int main(){
    string a="daabcbaabcbc";
    string b="abc";
    cout<<removeOccurrences(a,b);
    
}