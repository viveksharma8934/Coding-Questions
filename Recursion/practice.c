#include <stdio.h>

int main(){
    int n;
    int a[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]=a[j]){
                count++;
            }
        }printf("Occurence of %d is %d",i,count);
    }

}