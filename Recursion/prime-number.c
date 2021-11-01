#include <stdio.h>

int main(){
    int i,j;
    int a=10,b=20;
    for(j=a;j<=b;j++){
    for( i=2;i<j;i++){
        if(j%i==0){
            break;
        }
 if(j==i){
        printf("%d \t",j);     
    }
  }
    }return 0;
}

