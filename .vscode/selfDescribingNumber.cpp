#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int i;
        for(i=0;i<n.length();i++){
            int count=0;
            for(int j=0;j<n.length();j++){
                if(atoi(n[j])==i){
                    count++;
                }
            }
            if(count==atoi(n[i])){
                continue;
            }else{
                break;
            }
        }
        if(i==n.length()){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }
}