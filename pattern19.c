#include<stdio.h>
int main()
{
    int j,rows;//variable declaration
    printf("Enter the number of rows:\n ");
    scanf("%d",&rows);//take input from user
    printf("\n");
    while(rows>=1){//outer while loop
        int j=rows;
        while(j>=1){//inner while loop
            printf("%d",j);//Display pattern
            j--;
        }
        rows--;
    printf("\n");//move to next line
    }
    
}