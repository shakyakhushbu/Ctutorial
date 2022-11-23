#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("1/%d+ ",i);
    }
    for(i=1;i<=n;i++){
       sum= sum +i;
    }
    printf("\n 1/%d",sum);
}