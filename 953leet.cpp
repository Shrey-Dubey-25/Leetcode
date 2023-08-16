#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;   
   
    vector<int> hashc(string o){
        vector<int>h(26,0);
        int c=26;
        for(auto i:o){
            h[i-'a']=c;
            c--;
        }
        return h;
    }

    bool isAlienSorted(vector<string>& words, string order) {
        vector<string>s=words;
        vector<int>h=hashc(order);
        sort(s.begin(),s.end(),[&h](string& a,string& b){
            for(int i=0;i<min(a.size(),b.size());i++){
                if(h[a[i]-'a']!=h[b[i]-'a']){
                    return h[a[i]-'a']>h[b[i]-'a'];
                }
            }
            return a.length()<b.length();
        });
        for(int i=0;i<s.size();i++){
            if(s[i]!=words[i]){
                return false;
            }
        }
        return true;
    }
    int main(){
        vector<string>s{"hello","leetcode"};
        cout<<isAlienSorted(s,"hlabcdefgijkmnopqrstuvwxyz");
    }