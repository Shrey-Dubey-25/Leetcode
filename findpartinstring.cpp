#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int find(string a,string b){
    
    for(int i=0;i<a.size();i++){
        if(a[i]==b[0]){
            int j=i,c=0;
            for(int k=0;k<b.length();k++){
                if(b[k]==a[j]){    
                    j++;
                    c++;
                }
            }
            if(c==b.length()){
                return i;
            }
        }
    }
    return string::npos;
}

int main(){
    string a="Hello World!";
    string b="";
    cout<<find(a,b);
    


}