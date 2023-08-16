#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

struct Item{
    int value;
    int weight;
};

double fractionalKnapsack(int w, Item arr[], int n){
    sort(arr,arr+n,[](Item a,Item b){
        return (double)a.value/(double)a.weight>(double)b.value/(double)b.weight;
    });

    for(int i=0;i<n;i++){
        cout<<arr[i].value<<" "<<arr[i].weight<<endl;
    }   
    int i=0;
    double p=0;
    while(i<n && w>0){
        if(arr[i].weight<=w){
            w-=arr[i].weight;
            p+=arr[i].value;
            
        }
        else{
            double unit=(double)arr[i].value/(double)arr[i].weight;
            p+=w*unit;
            w=0;
        }
        i++;
    }
    return p;
}

int main(){
    Item v[]={{60,10},{100,20},{120,30}};
    int w=50;
    cout<<fractionalKnapsack(w,v,sizeof(v)/sizeof(v[0]));
}