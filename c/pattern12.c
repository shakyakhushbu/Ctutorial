#include<stdio.h>
int main(){
    int i,j,k;
    for(i=5;i>=1;i--){
        for(j=1;j>=0;j--){
            printf(" ");
        }
        for(k=5;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
}