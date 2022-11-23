#include<stdio.h>
int main(){
    int i,j=0,row=5,k;
    for(i=0;i<=5;i++){
        j=j+i;
        for(k=j;k>=1;k--){
            printf("*");
        }
        printf("\n");
    }
}