

#include<stdio.h>
int main(){
    int i,j,row=5;
    for(i=8;i>=1;i--)
    {
        if (i%2==0)
        {
            for (j=1;j<=i;j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        if(i%2!=0){
            for(j=i;j>=1;j--){
                printf("%d",j);
            }
            printf("\n");
        }
    }}