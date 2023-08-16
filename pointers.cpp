#include<iostream>
#include<vector>
#include <typeinfo>
#include<map>
using namespace std;
void solve(int n){
    if(n==0){return;}
    cout<<n<<endl;
    solve(n-1);
    
}
int main(){
    int a=5;
}