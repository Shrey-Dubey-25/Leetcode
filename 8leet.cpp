#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

// int myAtoi(string s) {
//     int i=0,sign=1;
//     while(i<s.length() && s[i]==' '){
//         i++;
//     }
//     if(s[i]=='-'){
//         sign=-1;
//         i++;
//     }
//     else if(s[i]=='+'){
//         i++;
//     }
//     int r=0;
//     int maxl=INT_MAX/10;
//     while(i<s.length() && (int)s[i]>=48 && (int)s[i]<=57){
//         int d=s[i]-'0';
//         if(r>maxl || ((r==maxl) &&d>7)){
//             if(sign>0){
//                 return INT_MAX;
//             }
//             else{
//                 return INT_MIN;
//             }
//         }
//         r=r*10+d;
//         i++;
//     }
//     return r*sign; 
// }






int myAtoi(string s) {
    int i=0,sign=1;
    string num="";
    while(s[i]==' '){
        i++;
    }
    if(s[i]=='-'||s[i]=='+'){
        if(s[i]=='-'){
            sign=-1;
        }
        i++;
    }
    
    while(s[i]>=48 && s[i]<=57){
        num+=s[i];
        i++;
    }
    int ans=0;
    for(int i=0;i<num.length();i++){
        if(ans>INT_MAX/10 || ans==INT_MAX/10 && (num[i]-48)>7){
            if(sign==1){
                return INT_MAX;
            }
            else{
                return INT_MIN;
            }
        }
        ans=ans*10+(num[i]-48);
    }
    return ans*sign;
}

int main(){
    string s="-91283472332";
    cout<<myAtoi(s);

}

