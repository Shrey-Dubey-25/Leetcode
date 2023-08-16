#include<iostream>
#include<vector>
using namespace std;

bool pallindrome(string s,int st){
    int i=0,j=s.length();
    s.erase(st,1);
    cout<<st;
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}


int main(){
   string s="abca";
   int st=0,en=s.length()-1;
   
  while(st<en){
if(s[st]!=s[en]){
    if(pallindrome(s,st)||pallindrome(s,en)){
        cout<< "true";
        break;
    }
    }else{
        st++;
        en--;
    }

  }
  cout<<"true";
}