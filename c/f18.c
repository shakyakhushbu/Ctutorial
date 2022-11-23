#include<stdio.h>
int main(){
    int r,j;
    printf("Enter row\n");
    scanf("%d",&r);
    while(r>=1){
        j=r;
        while(j>=1){
            printf("%d",j);
            j--;

        }
        r--;
        printf("\n");
    }
}