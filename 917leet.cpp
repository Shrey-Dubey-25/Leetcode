#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

// string reverseOnlyLetters(string s) {//Father with the flag algo --Generator--SilverDime
//         int i=0,j=s.length()-1;
//         bool flag1=false,flag2=false;
//         while(i<j){
//             if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122)){
//                 flag1=true;
//             }
//             if((s[j]>=65 && s[j]<=90)||(s[j]>=97 && s[j]<=122)){
//                 flag2=true;
//             }
//             if(flag1==false){
//                 i++;
//             }
//             if(flag2 ==false){
//                 j--;
//             }
//             if(flag1==true && flag2==true){
//                 swap(s[i],s[j]);
//                 i++,j--;
//                 flag1=false,flag2=false;
//             }
//         }
//         cout<<s;
// }

string reverseOnlyLetters(string s){
    int i=0,j=s.length()-1;
    while(i<j){
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122)){
            if((s[j]>=65 && s[j]<=90)||(s[j]>=97 && s[j]<= 122)){
                swap(s[i],s[j]);
                i++;j--;
        }
        else{
            j--;
        }
        }
        else{
            i++;
        }
}
cout<<s;
}

int main(){
    string s="a-bC-dEf-ghIj";
    reverseOnlyLetters(s);

}