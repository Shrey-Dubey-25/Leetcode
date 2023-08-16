#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;



int removeDuplicates(vector<int>& v) {
    int i=0,c=0;
    
    while(i<v.size()-1){
        if(v[i]!=v[i+1]){
            i++;
            c++;
        }
        else{
            v.erase(v.begin()+i);
        }
        
    }
    return c+1;
}

int main(){
    vector<int>v{0};
    cout<<removeDuplicates(v);


}