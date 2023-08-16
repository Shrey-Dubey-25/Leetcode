
#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(int x) {
    int cp=x;
    long long s=0;
    while(x>0){
        int d=x%10;
        s=s*10+d;
        x/=10;
        
    }
    return (s==cp);
}


int main(){
    cout<<isPalindrome(121);
    
}
