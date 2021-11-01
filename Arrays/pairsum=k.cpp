#include <iostream>

using namespace std;


bool pairSum(int a[],int n,int k){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]+a[j]==k)                                                 //Worst Time Complexity
//                 return true;
//         }
//     }
//     return false;
    int low=0;
    int high=n-1;                                                               //Best Time Complexity
    while(low<high){
        if(a[low]+a[high]==k){
            return true;
        }
        else if(a[low]+a[high]>k){
            high--;
        }
        else
            low++;
    }
    return false;
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
    cout<<pairSum(a,n,k)<<endl;
}
