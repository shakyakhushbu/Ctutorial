#include<stdio.h>
int main(){
    int i, num,fact=1;
    printf("Enter any number\n");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of the guven number is:%d",fact);
}