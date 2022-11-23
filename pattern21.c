#include<stdio.h>
int main()
{
    int j;//variable declaration
    
    while(8>=1){//outer while loop
        int j=8;
        while(j>=1){//inner while loop
            printf("%d",j);//Display pattern
            j--;
        }
        8=8-1;
    printf("\n");//move to next line
    }
    
}