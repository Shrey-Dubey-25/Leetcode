#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
static bool mysort(int n1,int n2){
    string v1=to_string(n1);
    string v2=to_string(n2);
    string v="";
    string n="";
    v.append(v1);
    v.append(v2);
    n.append(v2);
    n.append(v1);
    return v>n;
}
string largestNumber(vector<int>& v) {
    sort(v.begin(),v.end(),mysort);
    string s="";
    for(auto i:v){
        s+=to_string(i);
    }
    while(s[0]=='0' && s.length()>1)
            s.erase(0,1);
    return s;

}

int main(){
    vector<int>v{3,30,34,5,9};
    
    cout<<largestNumber(v);

}