#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

bool vowel(char &c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        return true;
    }
    return false;
}

string reverseVowels(string s) {
    int i=0,j=s.length()-1;
    while(i<j){
        if(!vowel(s[i])){
            i++;
            continue;
        }
        if(!vowel(s[j])){
            j--;
            continue;
        }
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
}

int main(){
    string s="hello";
    reverseVowels(s);


}