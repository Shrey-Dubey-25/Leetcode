#include <iostream>
#include <iostream>
#include  <bits/stdc++.h>

using namespace std;

int findlength(char name[]){
    cin.getline(name,100);
    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    return i;
}
void reverse(char name[]){
    cin.getline(name,100);
   
    int s=0,e;
    e=strlen(name)-1;
    for(int s=0,e=strlen(name)-1;s<e;s++,e--){
        swap(name[s],name[e]);
    }
    cout<<name;
}
void replacespace(char ch[]){

    cin.getline(ch,100);
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]==' '){
            ch[i]='@';
        }
    }
    cout<<ch;
    
}
bool pallindrome(char ch[]){
    cin>>ch;
    
    bool flag=true;
    int s=0,e=strlen(ch)-1;
    while(s<e){
        if(ch[s]==ch[e]){
            s++;
            e--;
        }
        else{
            flag=false;
            break;
        }
    }
    return flag;
}
void touppercase(char name[]){
    
    cin.getline(name,100);
    for(int i=0;i<strlen(name);i++){
        if(97<=name[i] && name[i]<=122){
            name[i]=name[i]-32;
        }
    }
    cout<<name;

}
void tolowercase(char name[]){
    
    cin.getline(name,100);
    for(int i=0;i<strlen(name);i++){
        if(65<=name[i] && name[i]<=90){
            name[i]=name[i]+32;
        }
    }
    cout<<name;

}
int main(){
    char name[100];
    tolowercase(name);
}
