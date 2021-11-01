#include<iostream>

using namespace std;


int binarySearch(int a[],int n,int k){
    int start=0;
    int end =n;
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==k){
            return mid;
        }
        else if(a[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

}




int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<binarySearch(a,n,k)<<endl;
    return 0;
}