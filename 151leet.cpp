#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

string reverseWords(string v) {//the sky is blue
        string ans="";
        int j=v.size()-1,ptr1=0,ptr2=0;
        while(j>=0){
            if(((int)v[j]>=65 && (int)v[j]<=90) ||  ((int)v[j]>=97 && (int)v[j]<=122)){
                string t="";
                while(j>=0 ){
                    if((int)v[j]==32){
                        break;
                    }
                    else{
                        t+=v[j];
                    }
                    j--;
                }
                reverse(t.begin(),t.end());
                ans+=t;
                ans+=" ";
                j--;
            }
        }
        return ans;
}

int main(){
    string s="  hello world  ";
    reverseWords(s);
}