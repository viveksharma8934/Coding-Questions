#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    printf("hello");
    int n;
    scanf("%d", &n);
  	int size = n*2-1;
    int a[size][size];
    int start =0; 
    int end = size-1;
    
   while(n!=0){
        int i,j;
        for(i=start;i<=end;i++){
        for(j=start;j<=end;j++){
        if(i==start || i==end || j==start || j==end){
            a[i][j]=n;
        }else{
            a[i][j]=0;
        }
        }
    }++start;
    --end;
    --n;    
    }
    for(int i=0;i< size;i++){
        for(int j=0;j< size;j++){
            printf("%d\t",a[i][j]);
            
        }
        printf("\n");
    }
}
    
