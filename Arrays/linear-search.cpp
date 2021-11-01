#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int temp;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>temp;
    for(int i=0;i<n;i++){
        if(temp!=a[i]){
            continue;
        }
        else{
            cout<<"present";
        }
    }

}

